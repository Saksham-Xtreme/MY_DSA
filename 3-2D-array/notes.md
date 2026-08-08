# 2D Arrays (Matrices)

## Topic Overview
A 2D array is essentially an array of arrays, representing a grid or a matrix with rows and columns. Memory is stored contiguously (Row-major or Column-major). This topic covers matrix traversal, searching, spiral matrix traversal, calculating diagonal sum, and search in sorted 2D matrices (Staircase Search).

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [MultiplicationMTX.cpp](./MultiplicationMTX.cpp) | Contains implementation code for `MultiplicationMTX`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [SparseMtx.cpp](./SparseMtx.cpp) | Contains implementation code for `SparseMtx`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [assignment-transpose.cpp](./assignment-transpose.cpp) | Contains implementation code for `assignment-transpose`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [daigonalSum.cpp](./daigonalSum.cpp) | Contains implementation code for `daigonalSum`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [inputAndOutput.cpp](./inputAndOutput.cpp) | Contains implementation code for `inputAndOutput`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [introduction.cpp](./introduction.cpp) | Contains implementation code for `introduction`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [matrixPointer.cpp](./matrixPointer.cpp) | Contains implementation code for `matrixPointer`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [spiral-mtx.cpp](./spiral-mtx.cpp) | Contains implementation code for `spiral-mtx`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [staircase-search-in-sorted-mtx.cpp](./staircase-search-in-sorted-mtx.cpp) | Contains implementation code for `staircase-search-in-sorted-mtx`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [MultiplicationMTX.cpp](./MultiplicationMTX.cpp)
**Description**: Contains implementation code for `MultiplicationMTX`.

**Algorithm / Logic Walkthrough**:
Check multiplication condition Input Matrix A Input Matrix B Multiplication Output Result

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [SparseMtx.cpp](./SparseMtx.cpp)
**Description**: Contains implementation code for `SparseMtx`.

**Algorithm / Logic Walkthrough**:
Input matrix Count non-zero values Sparse matrix array: (nonZero + 1) rows and 3 columns First row stores summary Fill sparse representation Display original matrix

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [assignment-transpose.cpp](./assignment-transpose.cpp)
**Description**: Contains implementation code for `assignment-transpose`.

**Key Functions & Signatures**:
- ` void transpose(int mtx[][3],int n,int m) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [daigonalSum.cpp](./daigonalSum.cpp)
**Description**: Contains implementation code for `daigonalSum`.

**Key Functions & Signatures**:
- ` void daigonalsum(int mtx[][4],int n ) `

**Algorithm / Logic Walkthrough**:
for(int i=0;i<n;i++){//rows for(int j=0;j<n;j++){//colms if(i==j){// primary daigonal sum+= mtx[i][j]; else if(j==n-i-1){// secondary daigonal sum+= mtx[i][j];

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [inputAndOutput.cpp](./inputAndOutput.cpp)
**Description**: Contains implementation code for `inputAndOutput`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [introduction.cpp](./introduction.cpp)
**Description**: Contains implementation code for `introduction`.

**Algorithm / Logic Walkthrough**:
arr[row][column]-> | row _ column

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [matrixPointer.cpp](./matrixPointer.cpp)
**Description**: Contains implementation code for `matrixPointer`.

**Algorithm / Logic Walkthrough**:
row se update hota hai aur phle no. ko point krta hai mtx[i][j]==*(*(ptr+i)+j); *(ptr+i)= row no. and when we add it with j and use pointer then we get our index

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [spiral-mtx.cpp](./spiral-mtx.cpp)
**Description**: Contains implementation code for `spiral-mtx`.

**Key Functions & Signatures**:
- ` void spiralmtx(int mtx[][4], int n,int m) `

**Algorithm / Logic Walkthrough**:
top right bottom left

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [staircase-search-in-sorted-mtx.cpp](./staircase-search-in-sorted-mtx.cpp)
**Description**: Contains implementation code for `staircase-search-in-sorted-mtx`.

**Key Functions & Signatures**:
- ` /*void search(int mtx[][4],int n,int m) `
- ` bool search(int mtx[][4],int n,int m) `

**Algorithm / Logic Walkthrough**:
staircase method left down void search(int mtx[][4],int n,int m){ brute force int key;

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Spiral Matrix Traversal**: Traverses layers of a matrix (top row, right col, bottom row, left col) using four pointers.
- **Diagonal Sum**: Optimize sum of primary and secondary diagonals in $O(N)$ instead of $O(N^2)$ by noticing that primary diagonal elements are at `(i, i)` and secondary are at `(i, n - 1 - i)`.
- **Staircase Search**: Search in a row-wise and column-wise sorted matrix starting from top-right `(0, m-1)` or bottom-left `(n-1, 0)` in $O(N + M)$ time.