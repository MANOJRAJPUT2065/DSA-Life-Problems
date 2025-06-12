
**Problem 2: MaximizeTrueLoveByAdviceFlips** ka **optimized and well-commented C++ solution** — full professional quality, DP (0/1 Knapsack) approach ke sath.
## ✅ `solution.cpp`

```cpp
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

    vector<int> flipOptions;
    for (int a : advice) {
        if (a == 0 || a == -1)
            flipOptions.push_back(1);  // flip cost = 1
    }

    int required = 2 - currentPositives;
    return (flipOptions.size() >= required) ? required : 1e9; // if not enough, mark as impossible
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
            // Case 1: don't include this person
            dp[i][j] = dp[i - 1][j];

            // Case 2: include this person if eligible and enough flips
            if (eligible && j >= cost && cost <= k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - cost] + 1);
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
```

---

## 🧪 Sample I/O (for local testing)

### `input.txt`

```
3 2
5
-1 1 0 1 -1
82
true
4
-1 -1 0 0
85
true
3
1 1 0
78
true
```

### Output:

```
2
```

---

## 🧠 Time & Space Complexity

* **Time**: `O(n * k)` — Standard 0/1 Knapsack DP
* **Space**: `O(n * k)` — Can be optimized to `O(k)` with 1D DP if needed

