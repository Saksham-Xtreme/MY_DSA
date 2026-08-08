# Divide and Conquer Algorithms

## Topic Overview
Divide and Conquer is an algorithmic paradigm that breaks a problem into smaller sub-problems, solves them recursively, and combines their results. This section covers standard sorting and searching algorithms like Merge Sort, Quick Sort, and Search in a Rotated Sorted Array.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [#include <iostream>.cpp](./#include <iostream>.cpp) | Contains implementation code for `#include <iostream>`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [MergeSort.cpp](./MergeSort.cpp) | Implements **Merge Sort**, a divide-and-conquer sorting algorithm. | $O(N \log N)$ | $O(N)$ (for auxiliary storage during merge) |
| [QuickSort.cpp](./QuickSort.cpp) | Implements **Quick Sort**, an efficient divide-and-conquer sorting algorithm. | $O(N \log N)$ average, $O(N^2)$ worst-case | $O(\log N)$ |
| [RotatedSort.cpp](./RotatedSort.cpp) | Contains implementation code for `RotatedSort`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [assignment1.cpp](./assignment1.cpp) | Contains implementation code for `assignment1`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [first.cpp](./first.cpp) | Contains implementation code for `first`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [#include <iostream>.cpp](./#include <iostream>.cpp)
**Description**: Contains implementation code for `#include <iostream>`.

**Key Functions & Signatures**:
- ` long long Power(int n, int k) `

**Algorithm / Logic Walkthrough**:
No need for <vector> in this code Calculates n raised to the power of k (n^k) Base Case: Anything to the power of 0 is 1. Recursive Step: Calculate power for k/2 If k is odd, the result is n * (n^(k/2))^2 For example: 3^5 = 3 * (3^2)^2

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [MergeSort.cpp](./MergeSort.cpp)
**Description**: Implements **Merge Sort**, a divide-and-conquer sorting algorithm.

**Key Functions & Signatures**:
- ` void merge(int arr[],int si,int mid,int ei) `
- ` void mergesort(int arr[],int si, int ei) `
- ` void print(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
Recursively splits the array into two halves, sorts them individually, and then merges the sorted halves back together using two pointers.

**Complexity Analysis**:
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(N)$ (for auxiliary storage during merge)

---
### [QuickSort.cpp](./QuickSort.cpp)
**Description**: Implements **Quick Sort**, an efficient divide-and-conquer sorting algorithm.

**Key Functions & Signatures**:
- ` int partition(int arr[],int si,int ei) `
- ` void quicksort(int arr[],int si,int ei) `
- ` void print(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
Selects a pivot element, partitions the array such that elements smaller than the pivot go to the left and larger elements go to the right, and then recursively sorts the left and right partitions.

**Complexity Analysis**:
- **Time Complexity**: $O(N \log N)$ average, $O(N^2)$ worst-case
- **Space Complexity**: $O(\log N)$

---
### [RotatedSort.cpp](./RotatedSort.cpp)
**Description**: Contains implementation code for `RotatedSort`.

**Key Functions & Signatures**:
- ` int search(int arr[],int si,int ei, int target) `

**Algorithm / Logic Walkthrough**:
here modified binary search approach tc=O(logn);

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [assignment1.cpp](./assignment1.cpp)
**Description**: Contains implementation code for `assignment1`.

**Key Functions & Signatures**:
- ` void merge(string *arr,int si,int mid,int ei) `
- ` void mergesort(string *arr,int si,int ei) `
- ` void print(string *arr,int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [first.cpp](./first.cpp)
**Description**: Contains implementation code for `first`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Merge Sort**: Divide array in half, sort recursively, and merge two sorted halves. Time complexity is $O(N \log N)$ always. Space is $O(N)$ due to auxiliary merge array.
- **Quick Sort**: Select a pivot, partition the array around the pivot, and sort recursively. Time complexity is $O(N \log N)$ average, $O(N^2)$ worst-case. Space is $O(\log N)$ recursion stack.
- **Search in Rotated Sorted Array**: Modified binary search. Determine which half (left or right) is sorted, and check if target lies in that sorted range ($O(\log N)$ time).