# 🧩 Problem Title: MaximizeTrueLoveByAdviceFlips

## 💬 Problem Statement

You are helping `n` people to achieve **TrueLove**. Each person has:
- An array of `m` advice values: either `-1` (discouraging), `0` (neutral), or `1` (encouraging)
- An integer `readiness` value between 0 and 100
- A boolean `hasFeelings` representing whether the person is emotionally interested (`true`) or not (`false`)

You are allowed to **flip at most `k` advice values in total**. Flipping changes a `-1` or `0` to `1`. You cannot flip a `1` or flip any value more than once.

A person is considered to have achieved **TrueLove** if:
- Their `readiness` is **at least 80**
- Their `hasFeelings` is **true**
- After flipping, they have **at least 2 encouraging (`1`) advice values**

---

## 🎯 Goal

Maximize the **total number of people** who can reach the "TrueLove" state using at most `k` flips across all advice arrays.

---

## 📥 Input Format

```

n k
Then for each of the n people:
m
a1 a2 a3 ... am
readiness
hasFeelings

```

- `n`: number of people
- `k`: total number of advice flips allowed
- For each person:
  - `m`: number of advice values
  - `a1 a2 ... am`: advice array (`-1`, `0`, `1`)
  - `readiness`: an integer (0 to 100)
  - `hasFeelings`: either `"true"` or `"false"`

---

## 📤 Output Format

```

Single integer – the maximum number of people who can be helped to achieve "TrueLove"

```

---

## 🧪 Sample Input

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

### ✅ Sample Output
```

2

```

---

## 🔍 Explanation

- Person 1 already has 2 `1`s ⇒ eligible
- Person 2 needs to flip 2 values to make 2 positive advices
- Person 3 is not eligible due to readiness < 80
- With 2 flips available, we can help Person 1 and 2

---

## 🧠 Constraints

- `1 ≤ n ≤ 100`
- `1 ≤ m ≤ 10` (per person)
- `0 ≤ k ≤ 100`
- `-1 ≤ ai ≤ 1` where `ai ∈ {-1, 0, 1}`
- `0 ≤ readiness ≤ 100`
- `hasFeelings` is a string: `"true"` or `"false"`

---

## 💡 Hints

- Use Dynamic Programming (0/1 Knapsack style) based on cost (flips needed) and benefit (1 TrueLove gained).
- Discard ineligible people early (due to readiness or feelings).
- Compute minimum flips needed for each person to get at least 2 `1`s.

---

👨‍💻 Author: **Manoj Singh**  
Inspired by true stories. Solved with logic and emotions ❤️
```

