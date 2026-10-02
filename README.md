# HackerRank Algorithms & GitHub Coding Portfolio

## Student Details

* **Name:** Pruthvi Haralayya
* **USN:** R25EF202
* **Branch:** Computer Science Engineering (CSE)
* **Semester:** III
* **Section:** D

## About This Portfolio

This repository contains my solutions for the required algorithmic problems completed as part of my 3rd Semester Computer Science Engineering coursework.

The problems were solved using **C++20**. For each problem, I focused on understanding the algorithm, implementing the solution, testing it, and analyzing its time and space complexity.

## Profiles

* **HackerRank:** https://www.hackerrank.com/profile/pruthviharalayy1
* **GitHub Repository:** https://github.com/pruthviharalayya5-droid/HackerRank-3rdSem-Algorithm-Portfolio

---

# Problems Solved

## 1. Mini-Max Sum

**Platform:** HackerRank

**Challenge:** https://www.hackerrank.com/challenges/mini-max-sum/problem

### Approach

The five input values are stored in an array. I first calculate the total sum of all five values. Then, by subtracting the maximum value from the total, I get the minimum possible sum. Similarly, by subtracting the minimum value, I get the maximum possible sum.

### Complexity

* **Time Complexity:** O(N)
* **Space Complexity:** O(N)

---

## 2. Birthday Cake Candles

**Platform:** HackerRank

**Challenge:** https://www.hackerrank.com/challenges/birthday-cake-candles/problem

### Approach

I first find the tallest candle using the maximum value in the array. Then I traverse the array again and count how many candles have the same height as the tallest candle.

### Complexity

* **Time Complexity:** O(N)
* **Space Complexity:** O(N)

---

## 3. Insertion Sort – Part 1

**Platform:** HackerRank

**Challenge:** https://www.hackerrank.com/challenges/insertionsort1/problem

### Approach

The last element of the array is treated as the value to be inserted. I compare it with the elements before it and shift larger elements one position to the right. The value is then placed in its correct position. The intermediate array states are printed as required by the problem.

### Complexity

* **Time Complexity:** O(N)
* **Space Complexity:** O(N)

---

## 4. Binary Search – Intro to Tutorial Challenges

**Platform:** HackerRank

**Challenge:** https://www.hackerrank.com/challenges/tutorial-intro/problem

### Approach

The array is already sorted, so I use binary search. I maintain two positions, `low` and `high`, and calculate the middle position. If the middle element is the required value, its index is returned. If the middle element is smaller, I search the right half; otherwise, I search the left half.

### Complexity

* **Time Complexity:** O(log N)
* **Space Complexity:** O(1)

---

## 5. Mark and Toys

**Platform:** HackerRank

**Challenge:** https://www.hackerrank.com/challenges/mark-and-toys/problem

### Approach

I first sort all the toy prices in ascending order. Starting from the cheapest toy, I keep adding prices while the total cost does not exceed the available budget. Since buying cheaper toys first allows the maximum number of toys to be purchased, the count gives the answer.

### Complexity

* **Time Complexity:** O(N log N)
* **Space Complexity:** O(N)

---

# Complexity Summary

| No. | Problem                 | Time Complexity | Space Complexity |
| --- | ----------------------- | --------------- | ---------------- |
| 1   | Mini-Max Sum            | O(N)            | O(N)             |
| 2   | Birthday Cake Candles   | O(N)            | O(N)             |
| 3   | Insertion Sort – Part 1 | O(N)            | O(N)             |
| 4   | Binary Search           | O(log N)        | O(1)             |
| 5   | Mark and Toys           | O(N log N)      | O(N)             |

---

# Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
└── 05-Mark-and-Toys/
    └── solution.cpp
```

# HackerRank Progress

I completed all five required algorithmic problems on HackerRank.

My Problem Solving badge progress currently shows **85/100 points**, with **15 more points required for the next star**.

The completed challenges helped me practice:

* Arrays
* Sorting
* Searching
* Insertion Sort
* Binary Search
* Greedy approach
* Time and space complexity analysis

# Learning Reflection

Working on these problems helped me understand how different algorithms can be used to solve problems efficiently. I practiced basic array operations, sorting, searching, and greedy techniques using C++20. I also learned the importance of analyzing time complexity before choosing an approach. Binary Search helped me understand how a sorted array can reduce the search time from linear to logarithmic. The Mark and Toys problem helped me understand how sorting can be combined with a greedy approach to get the maximum number of items within a budget. Uploading each solution to GitHub also gave me practical experience with Git, commits, and maintaining a structured coding portfolio. Overall, this activity improved my problem-solving skills and gave me a better understanding of writing and organizing algorithmic solutions.

---

# Evidence

The following evidence can be included in the final activity submission:

1. HackerRank accepted submission for **Mini-Max Sum**
2. HackerRank accepted submission for **Birthday Cake Candles**
3. HackerRank accepted submission for **Insertion Sort – Part 1**
4. HackerRank accepted submission for **Intro to Tutorial Challenges**
5. HackerRank accepted submission for **Mark and Toys**
6. HackerRank Problem Solving badge/progress screenshot
7. GitHub repository showing all five solution folders
8. GitHub commit/push evidence, if required

---

## Conclusion

This repository documents my algorithmic problem-solving work for the 3rd Semester. It contains the solutions, approaches, complexity analysis, and supporting evidence for all five required problems.
