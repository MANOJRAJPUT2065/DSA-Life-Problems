# 🧪 Testcases – `IsTrueLovePossible()`

> Format:  
> `advice = [...], readiness = <int>, isLoloPlaced = <true/false>, hasFeelings = <true/false> → <Expected Output>`

---

## ✅ TrueLove Cases

1.  [1, 1, 1], 90, true, true → "TrueLove"  
2.  [0, 1, 1, 1], 85, false, true → "TrueLove"  
3.  [1, 0, 1, 1], 82, true, true → "TrueLove"  
4.  [1, 1, 1, 1], 100, true, true → "TrueLove"  
5.  [1], 95, false, true → "TrueLove"  
6.  [1, 1, 1, 0], 80, true, true → "TrueLove"  
7.  [1, 1, 0, 1, 1], 88, false, true → "TrueLove"  
8.  [1, 1], 81, true, true → "TrueLove"  
9.  [1, 0, 0, 1, 1], 87, true, true → "TrueLove"  
10. [1, 1, 1, 1, 1], 90, true, true → "TrueLove"

---

## 💔 CutGya Cases

11. [-1, -1, -1], 20, true, false → "CutGya"  
12. [-1, 0, -1], 30, true, false → "CutGya"  
13. [0, 0, -1, -1], 10, true, false → "CutGya"  
14. [-1], 25, true, false → "CutGya"  
15. [-1, -1, -1, -1], 45, true, false → "CutGya"  
16. [0, -1, -1], 35, true, false → "CutGya"  
17. [-1, -1, -1], 40, true, false → "CutGya"  
18. [-1, 0, -1, 0], 41, true, false → "CutGya"  
19. [-1, -1, 0], 32, true, false → "CutGya"  
20. [-1, -1, -1, -1], 49, true, false → "CutGya"

---

## 🫠 FriendZonedButPlaced

21. [1, 1, 1], 80, true, false → "FriendZonedButPlaced"  
22. [1, 0, 1], 90, false, false → "FriendZonedButPlaced"  
23. [1, 1, 0, 1], 75, true, false → "FriendZonedButPlaced"  
24. [1], 71, true, false → "FriendZonedButPlaced"  
25. [1, 1, 1, 1], 95, false, false → "FriendZonedButPlaced"  
26. [1, 1, 1], 73, true, false → "FriendZonedButPlaced"  
27. [0, 1, 1], 79, false, false → "FriendZonedButPlaced"  
28. [1, 1], 80, true, false → "FriendZonedButPlaced"  
29. [1, 0, 1], 70, false, false → "FriendZonedButPlaced"  
30. [1, 1, 1], 99, true, false → "FriendZonedButPlaced"

---

## 😵 EmotionallyNotAvailable

31. [-1, 1, -1, 1], 40, true, false → "EmotionallyNotAvailable"  
32. [1, -1, 1, -1], 30, true, false → "EmotionallyNotAvailable"  
33. [-1, 1, -1], 50, true, false → "EmotionallyNotAvailable"  
34. [0, 0, -1, 1, -1], 42, true, false → "EmotionallyNotAvailable"  
35. [1, -1, 1], 45, true, false → "EmotionallyNotAvailable"  
36. [1, -1, 0, -1], 51, true, false → "EmotionallyNotAvailable"  
37. [-1, 1, -1, 1], 39, true, false → "EmotionallyNotAvailable"  
38. [0, -1, 0, -1, 1], 47, true, false → "EmotionallyNotAvailable"  
39. [-1, 1, -1], 48, true, false → "EmotionallyNotAvailable"  
40. [1, -1, 0, 0], 43, true, false → "EmotionallyNotAvailable"

---

## 🔁 TryAgainLater

41. [1, -1, 1, -1], 72, true, false → "TryAgainLater"  
42. [0, 1, -1, 1], 75, true, false → "TryAgainLater"  
43. [1, 0, -1, 1], 80, false, false → "TryAgainLater"  
44. [1, -1, 1, 0], 77, true, false → "TryAgainLater"  
45. [1, 0, -1, 0], 76, true, false → "TryAgainLater"  
46. [0, 0, 0, 0], 85, false, false → "TryAgainLater"  
47. [1, 1, -1, -1], 71, true, false → "TryAgainLater"  
48. [1, 0, 1, -1, 0], 78, true, false → "TryAgainLater"  
49. [0, 1, -1], 79, true, false → "TryAgainLater"

---

## ❓ UndefinedLoveState

50. [0, 0, 0], 50, false, false → "UndefinedLoveState"
