
### ✅ Testcase 1

**Input**
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

**Output**
```

2

```

---

### ✅ Testcase 2

**Input**
```

2 1
3
-1 -1 0
80
true
3
1 1 -1
90
true

```

**Output**
```

1

```

---

### ✅ Testcase 3

**Input**
```

1 2
4
-1 -1 -1 -1
100
true

```

**Output**
```

0

```

---

### ✅ Testcase 4

**Input**
```

1 2
4
1 1 1 1
100
true

```

**Output**
```

1

```

---

### ✅ Testcase 5

**Input**
```

2 0
3
1 1 0
80
true
3
0 0 0
90
true

```

**Output**
```

1

```

---

### ✅ Testcase 6

**Input**
```

2 2
3
-1 -1 -1
85
false
3
1 1 0
82
true

```

**Output**
```

1

```

---

### ✅ Testcase 7

**Input**
```

3 3
3
-1 0 0
81
true
3
1 -1 0
82
true
3
-1 -1 -1
80
true

```

**Output**
```

2

```

---

### ✅ Testcase 8

**Input**
```

3 1
3
-1 1 0
90
true
3
0 0 0
85
true
3
1 1 0
50
true

```

**Output**
```

1

```

---

### ✅ Testcase 9

**Input**
```

4 5
3
-1 -1 1
88
true
3
0 0 0
90
true
3
1 1 -1
92
true
3
-1 -1 -1
95
true

```

**Output**
```

3

```

---

### ✅ Testcase 10

**Input**
```

5 10
3
-1 -1 -1
88
true
3
0 0 0
90
true
3
1 1 -1
92
true
3
-1 -1 -1
95
true
3
1 1 1
98
true

```

**Output**
```

4

```

---

_(...continue like this until Testcase 50...)_

---

### ✅ Testcase 50

**Input**
```

1 3
5
0 0 0 0 0
85
true

```

**Output**
```

0

```

---

## 💡 Notes

- Flipping is limited to `k` advice values in total.
- Only people with `readiness >= 80` and `hasFeelings == true` are eligible.
- A person needs **at least 2 positive (`1`) advice values** to be in `"TrueLove"` state.
- Testcases include edge cases with 0 flips, 0 readiness, all negative advice, and maximum flips.

---

🧪 Testcases are designed to validate:
- No flip scenarios
- Full flip usage
- Greedy vs DP
- Tight bound conditions
- Ineligible participants due to `readiness` or `feelings`

---

**Author**: Manoj Singh  
For educational, emotional, and DSA excellence purposes ❤️  
```

---
