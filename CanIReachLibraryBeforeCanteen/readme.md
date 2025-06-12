 Can I Reach Library Before Canteen Closes?

Welcome to another episode in the `CutGya-Series` — where *college struggles meet computational complexity*. In this challenge, Manoj must juggle his **section schedule**, **library deadlines**, and **canteen cravings**.

---

## 🎓 Story

Manoj is stuck between completing assignments in the library 📚 and grabbing his favorite samosa before the canteen closes 🍴.

He has `N` sections (classes) to attend, each consuming time. Between classes, he can either:
- Go to the **library** to study (needs minimum study hours)
- Visit the **canteen** for energy (only if it's open and enough time is left)

Can Manoj **attend all classes**, **study enough in the library**, and **still reach the canteen before it closes**?

---

## 📥 Input Format

N L C T D1 D2 D3 ... DN

Where:
- `N`: Total number of class sections
- `L`: Minimum hours Manoj must study in the library
- `C`: Canteen closing time in total minutes from day start (e.g., 1020 for 5:00 PM)
- `T`: Total day time available (in minutes)
- `Di`: Duration of each section `i` in minutes

---

## 📤 Output Format

YES  // if possible to attend all classes, study L hours, and reach canteen before C NO   // otherwise

---

## ✅ Constraints

- `1 ≤ N ≤ 10^4`
- `1 ≤ L ≤ 12` (in hours)
- `1 ≤ C ≤ 1440` (total minutes in a day)
- `0 ≤ Di ≤ 180`
- `L*60 + sum(Di) ≤ T`

---

## 🧪 Sample Input 1

5 2 1080 1440 60 45 50 40 30

---

## 📤 Sample Output 1

YES

---

## 🧠 Explanation:

- Total class time = 60 + 45 + 50 + 40 + 30 = 225 mins
- Required library study = 2 hrs = 120 mins
- Total used time = 345 mins
- Remaining time = 1440 - 345 = 1095 mins

Since Manoj can reach the canteen (1080 mins) within this remaining time, the answer is `YES`.

---

## 💻 C++ Code (Greedy Check)

See [`solution.cpp`](./solution.cpp)

---

## 💬 Tags

`Greedy` · `Time Management` · `College Life` · `CutGya-Series` · `Library & Canteen Scheduling`

---

## ✍️ Author

**Manoj Singh** – Section warrior, DP master, and canteen loyalist 😤  
[GitHub](https://github.com/manojrajput2065) · [LinkedIn](https://linkedin.com/in/manojrajput2065)

---

## 🙌 Want to Add Your Campus Chaos?

Create your own DSA problem based on:
- 💻 Lab sessions vs. hostel deadlines
- 💼 Internship offers vs. internal marks
- 🕵️‍♂️ Copy-pasting in viva vs. code originality

Send a PR to the CutGya-Series and be a part of our emotional open-source journey!

---

## 📜 License

Licensed under the [MIT License](../../LICENSE)


---

