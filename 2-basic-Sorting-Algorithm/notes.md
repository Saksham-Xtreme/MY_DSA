# Basic Sorting Algorithms

## Topic Overview
Sorting is the process of arranging elements in a specific order (ascending or descending). This folder covers four fundamental sorting algorithms:
1. **Bubble Sort**: Repeatedly swaps adjacent elements if they are in the wrong order.
2. **Selection Sort**: Repeatedly finds the minimum element from the unsorted part and puts it at the beginning.
3. **Insertion Sort**: Builds the sorted array one item at a time by inserting elements into their correct position.
4. **Counting Sort**: A non-comparison-based sorting algorithm that counts occurrences of each unique value. Excellent when the range of input values is small.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [bubbleSort.cpp](./bubbleSort.cpp) | Implements **Bubble Sort**, a simple sorting algorithm. | $O(N^2)$ (Average and Worst), $O(N)$ (Best if optimized/already sorted) | $O(1)$ |
| [countingSort.cpp](./countingSort.cpp) | Implements **Counting Sort**, a non-comparison sorting algorithm. | $O(N + K)$ where $K$ is the range of values | $O(K)$ |
| [hello.cpp](./hello.cpp) | Contains implementation code for `hello`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [in-built-sort-func.cpp](./in-built-sort-func.cpp) | Contains implementation code for `in-built-sort-func`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [insertionSort.cpp](./insertionSort.cpp) | Implements **Insertion Sort**, a simple sorting algorithm that builds the final sorted array one item at a time. | $O(N^2)$ worst-case, $O(N)$ best-case (if already sorted) | $O(1)$ |
| [practice-quest.cpp](./practice-quest.cpp) | Contains implementation code for `practice-quest`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [selectionSort.cpp](./selectionSort.cpp) | Implements **Selection Sort**, an in-place comparison sorting algorithm. | $O(N^2)$ | $O(1)$ |
| [shellSort.cpp](./shellSort.cpp) | Contains implementation code for `shellSort`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [bubbleSort.cpp](./bubbleSort.cpp)
**Description**: Implements **Bubble Sort**, a simple sorting algorithm.

**Key Functions & Signatures**:
- ` void print(int arr[],int n) `
- ` void bubbleSort(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This pass is repeated until the list is sorted.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Average and Worst), $O(N)$ (Best if optimized/already sorted)
- **Space Complexity**: $O(1)$

---
### [countingSort.cpp](./countingSort.cpp)
**Description**: Implements **Counting Sort**, a non-comparison sorting algorithm.

**Key Functions & Signatures**:
- ` void print(int arr[],int n) `
- ` void countsort(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
It counts the number of objects having distinct key values (using an array/hash index), then uses arithmetic to calculate the positions of each object in the output sequence.

**Complexity Analysis**:
- **Time Complexity**: $O(N + K)$ where $K$ is the range of values
- **Space Complexity**: $O(K)$

---
### [hello.cpp](./hello.cpp)
**Description**: Contains implementation code for `hello`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [in-built-sort-func.cpp](./in-built-sort-func.cpp)
**Description**: Contains implementation code for `in-built-sort-func`.

**Algorithm / Logic Walkthrough**:
in-built sorting algo

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [insertionSort.cpp](./insertionSort.cpp)
**Description**: Implements **Insertion Sort**, a simple sorting algorithm that builds the final sorted array one item at a time.

**Key Functions & Signatures**:
- ` void print(int arr[],int n) `
- ` void insertsort(int arr[], int n) `

**Algorithm / Logic Walkthrough**:
It takes elements one by one from the unsorted part and inserts them into their correct position within the already sorted part by shifting larger elements.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ worst-case, $O(N)$ best-case (if already sorted)
- **Space Complexity**: $O(1)$

---
### [practice-quest.cpp](./practice-quest.cpp)
**Description**: Contains implementation code for `practice-quest`.

**Key Functions & Signatures**:
- ` void print(char arr[],int n) `
- ` void sortchar(char arr[], int n) `

**Algorithm / Logic Walkthrough**:
solve question using insertion sort method

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [selectionSort.cpp](./selectionSort.cpp)
**Description**: Implements **Selection Sort**, an in-place comparison sorting algorithm.

**Key Functions & Signatures**:
- ` void print(int arr[], int n) `
- ` void selectionSort(int arr[], int n) `

**Algorithm / Logic Walkthrough**:
It divides the input list into two parts: a sorted sublist at the left and an unsorted sublist at the right. It repeatedly finds the smallest element in the unsorted sublist and swaps it with the leftmost unsorted element.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$
- **Space Complexity**: $O(1)$

---
### [shellSort.cpp](./shellSort.cpp)
**Description**: Contains implementation code for `shellSort`.

**Key Functions & Signatures**:
- ` void shellSort(int arr[], int n) `

**Algorithm / Logic Walkthrough**:
Start by selecting a large gap, then reduce it step-by-step Perform a modified insertion sort for elements spaced by the current gap Store the current element to be positioned j will track the position while shifting elements Shift earlier elements forward if they are greater than temp This ensures elements spaced by 'gap' are sorted

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
| Algorithm | Time Complexity (Best) | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity | Stable? |
|---|---|---|---|---|---|
| **Bubble Sort** | $O(N)$ (optimized) | $O(N^2)$ | $O(N^2)$ | $O(1)$ | Yes |
| **Selection Sort** | $O(N^2)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ | No |
| **Insertion Sort** | $O(N)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ | Yes |
| **Counting Sort** | $O(N + K)$ | $O(N + K)$ | $O(N + K)$ | $O(K)$ | Yes |