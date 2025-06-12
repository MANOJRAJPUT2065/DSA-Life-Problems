
# 🎓 Problem: PlacementEligibilityCheck – Is Manoj Ready for the Dream Job?

Manoj is a hardworking student at **Siddaganga Institute**, juggling **assignments**, **internals**, and the occasional heartbreak 💔. Now, the placement season is here — but there's a **long list of academic filters** to clear first!

---

## 📝 The Challenge

Given a student’s academic performance, determine if they are **eligible to sit for placements**. 

To qualify, **ALL of the following conditions must be met**:

1. 📚 **Quiz Average ≥ 16**  
   - Two quizzes, each out of 20.

2. 🧠 **ABL Average ≥ 16**  
   - Two ABLs, each out of 20.

3. 🧾 **Internal Marks ≥ 40**  
   - Out of 100.

4. 📅 **Attendance ≥ 85%**

5. 🎖️ **No Active Backlogs**
   - A boolean input: `true` if no backlogs, `false` otherwise.

If the student fails even **one condition**, print `"NOT ELIGIBLE"`.

If **all** criteria are met, print `"ELIGIBLE"`.

---

## 🧩 Input Format

quiz1 quiz2
abl1 abl2
internalMarks attendancePercentage
noBacklogs   // "true" or "false"

All values are space-separated:
- `quiz1, quiz2, abl1, abl2` ∈ [0, 20]  
- `internalMarks` ∈ [0, 100]  
- `attendancePercentage` ∈ [0, 100]  
- `noBacklogs` ∈ { "true", "false" }

---

## 📤 Output Format

Print `"ELIGIBLE"` or `"NOT ELIGIBLE"` (without quotes).

---

## 🔎 Constraints

- Quiz and ABL scores are integers.
- Internal marks and attendance are valid bounded integers.
- Backlog status is passed as a lowercase string.

---

## 🔍 Sample Testcases

### Testcase 1

18 17 19 18 42 87 true

Output:

ELIGIBLE

---

### Testcase 2

16 15 16 16 44 90 true

Output:

NOT ELIGIBLE

---

### Testcase 3

20 20 20 20 50 95 false

Output:

NOT ELIGIBLE

---

### Testcase 4

16 16 16 16 40 85 true

Output:

ELIGIBLE

---

## 💡 Tip

This is a classic **multi-condition validation problem**. Great for brushing up on:
- Conditional statements
- Input parsing
- Boolean logic

---

## 🔖 Tags

`Eligibility Checks` · `College Simulation` · `Placement Rules` · `Conditionals` · `Logic Building`

---

## 👨‍💻 Author

**Manoj Singh**  
Contributed to the `CutGya-Series`, where heartbreak meets DSA 💔🧠


---

