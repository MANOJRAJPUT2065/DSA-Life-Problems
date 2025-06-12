#include <bits/stdc++.h>
using namespace std;

/*
 * Problem: CanIClearBacklogsBeforePlacements?
 * Author: Manoj Singh
 * Approach: Greedy + Knapsack
 */

struct Subject {
    int timeRequired;
    bool isHackable;
    int hackCost;
    int timeSaved;
};

bool canClearAllSubjects(vector<Subject>& subjects, int T, int K) {
    int n = subjects.size();
    vector<pair<int, int>> options; // {actual_time, karma_used}

    for (auto& sub : subjects) {
        int time = sub.timeRequired;
        int karma = 0;

        // Try using hack if it's beneficial
        if (sub.isHackable && sub.hackCost <= K && sub.timeSaved < time) {
            time -= sub.timeSaved;
            karma = sub.hackCost;
        }

        options.push_back({time, karma});
    }

    // Try all combinations to find if possible
    vector<vector<bool>> dp(n + 1, vector<bool>(K + 1, false));
    dp[0][0] = true;

    for (int i = 0; i < n; i++) {
        for (int k = K; k >= 0; k--) {
            if (!dp[i][k]) continue;

            int t = options[i].first;
            int kc = options[i].second;

            if (k + kc <= K) {
                dp[i + 1][k + kc] = true;
            }
        }
    }

    // Check if total time for any valid karma is ≤ T
    for (int k = 0; k <= K; k++) {
        if (dp[n][k]) {
            int totalTime = 0;
            for (int i = 0; i < n; i++) totalTime += options[i].first;
            if (totalTime <= T) return true;
        }
    }

    return false;
}

int main() {
    int n, T, K;
    cin >> n >> T >> K;

    vector<Subject> subjects(n);
    for (int i = 0; i < n; i++) {
        cin >> subjects[i].timeRequired
            >> subjects[i].isHackable
            >> subjects[i].hackCost
            >> subjects[i].timeSaved;
    }

    cout << (canClearAllSubjects(subjects, T, K) ? "YES" : "NO") << endl;
    return 0;
}