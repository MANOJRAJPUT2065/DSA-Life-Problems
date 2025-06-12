# ❤️ True Love Problem Set

This repository contains two unique love-inspired coding problems based on real-life emotions and logic. These problems are implemented in C++ and range from easy rule-based checks to dynamic programming (DP) optimization.

---

## 🧩 Problem 1: IsTrueLovePossible (Easy)

### 🔎 Problem Statement

Given:
- `readiness` – integer (0 to 100)
- `hasFeelings` – boolean (true/false)
- `isLoloPlaced` – boolean
- `advice[]` – array of integers from {-1, 0, 1}  
  - 1 = encouraging  
  - 0 = neutral  
  - -1 = discouraging

### 🎯 Output

Return one of the following based on logic:
- `"TrueLove"`
- `"CutGya"`
- `"FriendZonedButPlaced"`
- `"EmotionallyNotAvailable"`
- `"TryAgainLater"`
- `"UndefinedLoveState"`

### ✅ Conditions

- `"TrueLove"`: readiness ≥ 80, hasFeelings = true, and ≥ 2 positive advice
- `"CutGya"`: readiness < 50, hasFeelings = false, and ≥ 2 negative advice
- `"FriendZonedButPlaced"`: readiness ≥ 70, hasFeelings = false, ≥ 2 positive advice, and isLoloPlaced = true
- `"EmotionallyNotAvailable"`: mixed advice, no feelings, readiness < 60
- `"TryAgainLater"`: readiness between 70–80 and no feelings
- Else: `"UndefinedLoveState"`

---

## 🧩 Problem 2: MaximizeTrueLoveByAdviceFlips (Medium-Hard)

### 🔎 Problem Statement

You are mentoring `n` people. Each has:
- An array `advice[]` of -1, 0, 1 values
- An integer `readiness` score (0–100)
- A boolean `hasFeelings`

You can flip at most `k` advice values across all people (convert -1 or 0 to 1).

A person can be in `"TrueLove"` state if:
- readiness ≥ 80
- hasFeelings = true
- After flipping, they have ≥ 2 encouraging advices (`1`)

### 🎯 Objective

Maximize the number of people who reach `"TrueLove"` state after performing at most `k` total advice flips.

---

### ✅ Input Format

n k
Then n blocks of:
m
a1 a2 a3 ... am
readiness
hasFeelings

