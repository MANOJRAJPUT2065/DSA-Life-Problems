# 🎯 Problem: CanIClearBacklogsBeforePlacements?

**Difficulty:** Medium  
**Tags:** DP, Knapsack, Greedy, CollegeLife, Optimization

---

## 🧑‍🏫 Context

Manoj has multiple backlogs due to... well, you know... "bad semesters and good sleep." 😴  
Now placements are here, and to be eligible, he must clear **as many subjects as possible** before the timer runs out.

He can either:
- Study each subject with full effort
- Use a **hack** (like copying assignments, crash course, ChatGPT 😏), which reduces study time **at the cost of Karma Points**

But if his **total study time exceeds `T` hours** or **he spends more karma than he has**, he won't make it.

---

## 📥 Input Format

- An integer `N`: number of subjects
- Two integers: `T` (total available time), `K` (total available karma points)
- Then `N` lines each containing:
  - `timeRequired` (without hack)
  - `isHackable` (0 or 1)
  - `hackCost` (karma required if hackable)
  - `timeSavedByHack` (time reduced by hacking)

---

## 📤 Output Format

- Output `"YES"` if he can clear all subjects
- Otherwise output `"NO"`

---

## 🔒 Constraints

- `1 ≤ N ≤ 1000`
- `1 ≤ timeRequired ≤ 24`
- `0 ≤ isHackable ≤ 1`
- `0 ≤ hackCost ≤ 100`
- `0 ≤ timeSavedByHack ≤ timeRequired`
- `0 ≤ T ≤ 1e5`
- `0 ≤ K ≤ 1e3`

---

## 🧪 Sample Input