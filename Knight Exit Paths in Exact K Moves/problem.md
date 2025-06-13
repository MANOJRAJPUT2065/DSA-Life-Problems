# Problem: Knight Exit Paths in Exact K Moves

## Difficulty: Medium 🔥  
### Tags: DFS, Memoization, 3D DP, Chessboard, Knight Moves

---

## Problem Statement

You are given a chessboard of size `m x n`, and a **knight** is placed at position `(startRow, startColumn)`. You are allowed to make **at most `maxMove` moves**, where each move must follow standard knight rules in chess.

Return the **number of possible paths** that move the knight **out of the board exactly on the `maxMove`-th move**.

---

## Standard Knight Moves

A knight can move in any of the following 8 ways from position `(i, j)`:

```

(i - 2, j - 1), (i - 1, j - 2), (i + 1, j - 2), (i + 2, j - 1),
(i + 2, j + 1), (i + 1, j + 2), (i - 1, j + 2), (i - 2, j + 1)

````

---

## Constraints

- `1 <= m, n <= 25`
- `0 <= startRow < m`
- `0 <= startColumn < n`
- `0 <= maxMove <= 100`
- Output your answer modulo `10^9 + 7`.

---

## Function Signature

```cpp
int knightOutPaths(int m, int n, int maxMove, int startRow, int startColumn);
````

---

## Example

### Input

```text
m = 3, n = 3
maxMove = 2
startRow = 0, startColumn = 0
```

### Output

```text
6
```

### Explanation

The knight can move out of the board in exactly 2 moves in 6 distinct ways.

```
