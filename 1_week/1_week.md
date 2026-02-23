# Time complexity && Space Complexity

## Time complexity

> Measuring the speed of program execution

### Introduction

- A function is a qualitative description of the time required to execute an algorithm
- It is often represented using Big-O notation (e.g., O()), which considers only the highest-order terms of the function and not the coefficients containing the function.

There are three rules for calculating Big O Notation:

* Constants are negligible
* Take the maximum power
* The logarithm is negligible

以下為常見時間複雜度，接下來會一一舉例。

| Big O Notation | 別名  | 常見演算法 |
| --------   | -------- | -------- |
| [$O(1)$](#O1-Constant-time)      | 常數     | 陣列讀取     |
| [$O(n)$](#On-Linear-time)       | 線性     | [Linear search](https://en.wikipedia.org/wiki/Linear_search)|
| [$O(logn)$](#Olog-n-Logarithmic-time)   | 對數(Logarithmic )     | [二分搜尋法](https://en.wikipedia.org/wiki/Binary_search_algorithm)|
| $O(nlogn)$ | 線性     | [堆積排序](https://hackmd.io/@SupportCoding/Heap_sort)，[合併排序](/Merge_sort)     |
| $O(n^2)$    | 平方     | [氣泡排序](https://en.wikipedia.org/wiki/Bubble_sort)，[插入排序](https://en.wikipedia.org/wiki/Insertion_sort)|
| [$O(n^3)$](#On3-Cubic-time)     | 三次方     | 三重迴圈枚舉法，高斯消去法求解線性方程組     |
| $O(2^n)$     | 指數     | 費氏數列     |
| [$O(n!)$](#On-Factorial-time)      | 階層     | 排列組合，八皇后問題  |

## Space complexity

> Memory space required for program execution

### Introduction

Time complexity and space complexity are mutually exclusive; that is, **trading time for space, and space for time**.

The following are common space complexities.

| Big O Notation | 介紹                                         | 常見                         |
| -------------- | -------------------------------------------- | ---------------------------- |
| [$O(1)$](#O1-空間複雜度)       | 不隨輸入資料量增加而增加                     | 常數空間的演算法             |
| [$O(n)$](#span-idMathJax-Element-40-Frame-classmjx-chtml-MathJax_CHTML-tabindex0-stylefont-size-113-position-relative-data-mathmlOn-rolepresentationOnOnOn-空間複雜度)    | 記憶體空間和輸入資料量等同                   | 需要儲存輸入資料的演算法     |
| [$O(n^2)$](#On2-空間複雜度)       | 記憶體空間是輸入資料量的平方                 | 需要儲存兩兩之間關係的演算法 |
| [$O(log n)$](#Olog-n空間複雜度)     | 記憶體空間輸入資料量之間呈對數關係           | 遞迴演算法                   |
| $O(n log n)$   | 記憶體空間是輸入資料量乘以`log`(輸入資料量)  | #                            |
| [$O(n + k)$](#On--k空間複雜度)     |           #                             |      基數排序        |
| $O(2^n)$       | 記憶體空間是 `2` 的輸入資料量次方            | #                            |