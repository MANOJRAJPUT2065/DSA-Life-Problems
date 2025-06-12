# ✅ Solution: PlacementEligibilityCheck

---

## 🎯 Problem Summary

To be **ELIGIBLE for placements** at Siddaganga Institute:

1. Average of **Quiz1 & Quiz2** must be **≥ 16**
2. Average of **ABL1 & ABL2** must be **≥ 16**
3. **Internal Marks** must be **≥ 40**
4. **Attendance** must be **≥ 85%**
5. Student **must not have backlogs**
6. If internal marks are **between 40–49**, then **attendance must be ≥ 90%**

---

## 💡 Approach

We simply evaluate each of the above conditions in sequence.

If **all are satisfied**, print `ELIGIBLE`, otherwise `NOT ELIGIBLE`.

---

## 🧠 C++ Solution

```cpp
#include <iostream>
using namespace std;

string checkEligibility(
    int quiz1, int quiz2,
    int abl1, int abl2,
    int internal, int attendance,
    bool noBacklogs
) {
    double quizAvg = (quiz1 + quiz2) / 2.0;
    double ablAvg = (abl1 + abl2) / 2.0;

    if (quizAvg < 16 || ablAvg < 16) return "NOT ELIGIBLE";
    if (internal < 40) return "NOT ELIGIBLE";
    if (attendance < 85) return "NOT ELIGIBLE";
    if (!noBacklogs) return "NOT ELIGIBLE";

    if (internal < 50 && attendance < 90)
        return "NOT ELIGIBLE";

    return "ELIGIBLE";
}

int main() {
    int quiz1, quiz2, abl1, abl2, internal, attendance;
    bool noBacklogs;
    cin >> quiz1 >> quiz2;
    cin >> abl1 >> abl2;
    cin >> internal >> attendance;
    cin >> noBacklogs;

    cout << checkEligibility(quiz1, quiz2, abl1, abl2, internal, attendance, noBacklogs) << endl;
    return 0;
}