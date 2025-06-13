# ✅ Solution: Knight Exit Paths in Exact K Moves

## 🧠 Approach: DFS + Memoization (3D DP)

We want to count **how many distinct ways** a knight can exit the board using **exactly `maxMove` moves** starting from a given cell `(startRow, startColumn)`.

To avoid recalculating the same subproblems, we use **3D dynamic programming** (memoization) to store previously computed results.

---

## 💡 Intuition

- A knight has 8 possible moves.
- Each move decreases the remaining steps (`maxMove`) by 1.
- If the knight moves **out of bounds exactly when `moves == 0`**, count it as 1.
- If the knight moves out before using all moves, discard the path.
- If it stays within bounds and moves == 0, don’t count — it hasn't exited yet.

---

## 🔁 Recurrence

Let `dp[moves][i][j]` be the number of ways to exit the board from cell `(i, j)` using exactly `moves` moves.

- **Base Case 1:**  
  If `(i, j)` is out of bounds:
  - Return 1 **only if `moves == 0`** — exited with exact moves.
  - Otherwise return 0.

- **Base Case 2:**  
  If `moves == 0` and the knight is still inside:
  - Return 0 — not a valid path.

- **Memoization:**  
  If `dp[moves][i][j] != -1`, return cached value.

- **Transition:**  
  Try all 8 knight moves, and add up all valid paths:
  ```cpp
  dp[moves][i][j] = sum of dfs(ni, nj, moves - 1) for all 8 directions
````

---

## 🧪 Edge Scenarios

| Scenario                 | Outcome                                             |
| ------------------------ | --------------------------------------------------- |
| Exits on move `k`        | ✅ Count this path                                   |
| Exits before move `k`    | ❌ Invalid                                           |
| Stays inside at move `k` | ❌ Invalid                                           |
| Board size is `1 x 1`    | Knight exits in 1 move always                       |
| `maxMove = 0`            | Only exit if knight is already out — which it isn’t |

---

## ✅ Code: C++ (Memoization)

```cpp
class Solution {
public:
    int M, N;
    const int MOD = 1e9 + 7;
    vector<vector<vector<int>>> dp;
    vector<pair<int, int>> directions = {
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1},
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1}
    };

    int dfs(int i, int j, int moves) {
        // Exit board condition — only valid if moves == 0
        if (i < 0 || i >= M || j < 0 || j >= N)
            return moves == 0 ? 1 : 0;
        if (moves == 0)
            return 0;
        if (dp[moves][i][j] != -1)
            return dp[moves][i][j];

        int ways = 0;
        for (auto [dx, dy] : directions) {
            ways = (ways + dfs(i + dx, j + dy, moves - 1)) % MOD;
        }

        return dp[moves][i][j] = ways;
    }

    int knightOutPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        M = m; N = n;
        dp.assign(maxMove + 1, vector<vector<int>>(m, vector<int>(n, -1)));
        return dfs(startRow, startColumn, maxMove);
    }
};
```

---

## 🕒 Time Complexity

* `O(maxMove × m × n × 8)`
* Each state `(moves, i, j)` is computed once.
* 8 possible directions per call.

---

## 📦 Space Complexity

* `O(maxMove × m × n)` for the DP cache.

---

## ✅ Sample Scenario Walkthrough

### Example:

```
m = 3, n = 3
maxMove = 2
startRow = 0, startColumn = 0
```

**Knight starts at (0, 0):**

1. First move → 2 or 3 valid cells inside
2. Second move → from each of those, try all knight moves
3. Only count paths that exit on 2nd move exactly
4. Final output: `6` valid paths

---
