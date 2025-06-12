
# 🧪 PlacementEligibilityCheck – 50+ Testcases

### 📝 Format:
Each test case follows this input format:

quiz1 quiz2
abl1 abl2
internal attendance
noBacklogs

➡️ Output: `"ELIGIBLE"` or `"NOT ELIGIBLE"`

---

## ✅ VALID CASES – Should Output: `ELIGIBLE`

18 17 19 18 42 87 true



20 20 20 20 100 100 true



16 17 16 18 55 90 true



19 20 18 17 85 92 true



16 16 16 16 50 90 true



17 17 17 17 49 95 true



19 18 16 16 60 88 true



20 20 20 20 40 90 true



19 17 19 16 70 95 true



16 20 16 16 40 91 true



19 19 18 19 45 92 true



18 18 18 18 55 96 true



17 17 16 17 41 90 true



20 18 19 20 60 85 true



18 16 17 17 50 95 true



17 19 17 18 60 100 true



18 20 16 18 90 85 true



19 19 19 19 40 93 true



16 16 16 16 50 100 true



20 20 16 16 40 95 true

---

## ❌ INVALID CASES – Should Output: `NOT ELIGIBLE`

### ✘ Quiz Average Fail

14 15 16 16 50 90 true



15 15 20 20 80 95 true



10 12 16 18 75 90 true



13 14 17 17 80 90 true

---

### ✘ ABL Average Fail

18 19 14 13 60 90 true



20 20 15 10 75 92 true



16 16 12 14 70 88 true

---

### ✘ Internal Marks < 40

20 20 20 20 39 95 true



18 18 18 18 35 87 true



17 18 19 19 33 90 true

---

### ✘ Attendance < 85%

20 20 20 20 90 83 true



17 17 17 17 50 82 true



18 18 19 19 85 80 true

---

### ✘ Has Backlogs

20 20 20 20 100 100 false



18 19 18 18 70 95 false



17 18 17 18 90 90 false

---

### ✘ Internal 40–50 + Attendance < 90%

18 17 18 16 45 88 true



20 20 20 20 50 85 true



17 17 17 17 42 86 true



19 19 18 18 47 89 true



16 16 16 16 41 88 true

---

## 🧪 Edge Case Mix (High but One Rule Broken)

20 20 20 20 100 100 false



16 16 16 16 49 89 true



19 19 20 20 50 89 true



20 20 20 20 100 84 true

---
