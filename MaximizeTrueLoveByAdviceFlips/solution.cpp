#include <bits/stdc++.h>
using namespace std;

/*
 * Title: MaximizeTrueLoveByAdviceFlips
 * Author: Manoj Singh
 * Description:
 *   For each person, calculate how many advice flips are needed to get at least
 *   two encouraging (1) advices. If a person has readiness ≥ 80 and hasFeelings,
 *   they are eligible. We then use 0/1 Knapsack DP where:
 *     - cost = flips needed for that person
 *     - value = 1 (if they become TrueLove)
 *     - capacity = k (total flips allowed)
 */

// Function to calculate minimum flips needed for a person to get 2 '1's
int getMinFlipsToReachTwoOnes(const vector<int>& advice) {
    int currentPositives = count(advice.begin(), advice.end(), 1);
    if (currentPositives >= 2) return 0; // Already eligible

    int required = 2 - currentPositives;
    int possibleFlips = count_if(advice.begin(), advice.end(), [](int a) {
        return a == 0 || a == -1;
    });

    return (possibleFlips >= required) ? required : 1e9; // Mark as impossible if not enough
}

// Main logic to maximize TrueLove count with DP
int maximizeTrueLove(
    const vector<vector<int>>& allAdvice,
    const vector<int>& readiness,
    const vector<bool>& feelings,
    int k
) {
    int n = allAdvice.size();
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 1; i <= n; i++) {
        int cost = getMinFlipsToReachTwoOnes(allAdvice[i - 1]);
        bool eligible = (readiness[i - 1] >= 80 && feelings[i - 1]);

        for (int j = 0; j <= k; j++) {
            dp[i][j] = dp[i - 1][j]; // Not taking this person
            if (eligible && j >= cost && cost <= k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - cost] + 1); // Taking the person
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> allAdvice(n);
    vector<int> readiness(n);
    vector<bool> feelings(n);

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        allAdvice[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> allAdvice[i][j];
        }
        cin >> readiness[i];
        string feeling;
        cin >> feeling;
        feelings[i] = (feeling == "true");
    }

    cout << maximizeTrueLove(allAdvice, readiness, feelings, k) << endl;
    return 0;
}


