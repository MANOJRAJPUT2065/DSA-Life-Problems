
# 📚 Problem: Can I Clear Backlogs Before Placements?

Welcome to another rollercoaster from the `CutGya-Series` – where emotions meet edge cases!

In this problem, our protagonist Manoj is fighting deadlines, assignments, and a broken heart 💔 to clear his backlogs before placement season. Will he make it? Or will he be left with regret and resume gaps?

---

## 💡 Problem Statement

You are given `N` backlogs. Each backlog has:
- `T[i]`: Time required to complete
- `isHackable[i]`: Can be reduced using a hack (0 or 1)
- `hackCost[i]`: Cost (in effort points) to apply the hack
- `timeSaved[i]`: Time saved if hack is used

You are also given:
- `T`: Total time Manoj has
- `K`: Maximum effort points he can use

Determine whether Manoj can clear **all** backlogs in `T` time using **at most `K` effort points** by applying **zero or more hacks**.

---

## 📥 Input Format

N T K T1 isHackable1 hackCost1 timeSaved1 T2 isHackable2 hackCost2 timeSaved2 ... TN isHackableN hackCostN timeSavedN

---

## 📤 Output Format

YES  // if he can clear all backlogs NO   // otherwise

---

## ✅ Constraints

- `1 ≤ N ≤ 100`
- `0 ≤ T ≤ 1000`
- `0 ≤ K ≤ 1000`
- `1 ≤ Ti ≤ 100`
- `isHackable[i] ∈ {0, 1}`
- `0 ≤ hackCost[i] ≤ K`
- `0 ≤ timeSaved[i] ≤ T[i]`

---

## 🔍 Example

### Input:

3 10 5 6 1 2 3 4 0 0 0 5 1 3 2

### Output:

YES

---

## 🧠 Explanation:

- You can apply hack on backlog 1 (6 → 3 time, 2 effort)
- Backlog 2 cannot be hacked
- Backlog 3 hack reduces it to 3 time (5 → 3, costs 3 effort)

Total time used: `3 + 4 + 3 = 10`  
Total effort used: `2 + 3 = 5` ✅

---

## 💻 Full C++ Solution with DP (0/1 Knapsack)

See [`solution.cpp`](./solution.cpp)

---

## 🧪 Testcases

Over **50 real-life inspired test cases** are available in [`testcases.md`](./testcases.md)

---

## 🧠 Time & Space Complexity

- **Time**: `O(N * K)` where N = backlogs, K = max effort
- **Space**: `O(K)` (Optimized 1D DP)

---

## 👨‍💻 Author

> ✍️ **Manoj Singh**  
> Blockchain & Full-Stack Developer | DP, DSA & Drama Enthusiast 🧠  
> [GitHub](https://github.com/manojrajput2065) | [LinkedIn](https://linkedin.com/in/manojrajput2065)

---

## 🏷️ Tags

`Dynamic Programming` · `Greedy` · `0/1 Knapsack` · `CutGya-Series` · `Effort Optimization` · `Placement Readiness`

---

## 🌟 Contribute

Got your own heartbreak-to-DSA story? Add your version to the `CutGya-Series` 💔  
Create a new folder with:
- `problem.md`
- `solution.cpp`
- `testcases.md`
And make a PR! Let's make DSA dramatic again 😎

---

