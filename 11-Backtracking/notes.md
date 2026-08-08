# Backtracking

## Topic Overview
Backtracking is an algorithmic technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, and removing those solutions that fail to satisfy the constraints at any point. This folder covers problems like finding subsets, string permutations, N-Queens placement, Grid ways (counting paths), and Sudoku solving.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [BTonArr.cpp](./BTonArr.cpp) | Contains implementation code for `BTonArr`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [FindPermutation.cpp](./FindPermutation.cpp) | Contains implementation code for `FindPermutation`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [FindSubsets.cpp](./FindSubsets.cpp) | Contains implementation code for `FindSubsets`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [GridWays.cpp](./GridWays.cpp) | Contains implementation code for `GridWays`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [Nqueens.cpp](./Nqueens.cpp) | Contains implementation code for `Nqueens`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [SodokuSolver.cpp](./SodokuSolver.cpp) | Contains implementation code for `SodokuSolver`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [assignmentOne.cpp](./assignmentOne.cpp) | Contains implementation code for `assignmentOne`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [new.cpp](./new.cpp) | Contains implementation code for `new`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [BTonArr.cpp](./BTonArr.cpp)
**Description**: Contains implementation code for `BTonArr`.

**Key Functions & Signatures**:
- ` void print(int arr[],int n) `
- ` void changeArr(int *arr,int n,int i) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [FindPermutation.cpp](./FindPermutation.cpp)
**Description**: Contains implementation code for `FindPermutation`.

**Key Functions & Signatures**:
- ` void permutation(string str,string ans) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [FindSubsets.cpp](./FindSubsets.cpp)
**Description**: Contains implementation code for `FindSubsets`.

**Key Functions & Signatures**:
- ` void printsub(string str,string subset) `

**Algorithm / Logic Walkthrough**:
find and print all subset tc=O(2^n) Sc=O(n) subset = 2^n yes

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [GridWays.cpp](./GridWays.cpp)
**Description**: Contains implementation code for `GridWays`.

**Key Functions & Signatures**:
- ` int gridways(int r,int c,int n,int m) `

**Algorithm / Logic Walkthrough**:
right down

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Nqueens.cpp](./Nqueens.cpp)
**Description**: Contains implementation code for `Nqueens`.

**Key Functions & Signatures**:
- ` void print(vector<vector<char>> board,int n) `
- ` bool isSafe(vector<vector<char>> board,int n,int row,int col) `
- ` int nQueens( vector<vector<char>> board,int n,int row) `

**Algorithm / Logic Walkthrough**:
The N-Queens problem is a classic example of a backtracking algorithm. The goal is to place 'n' non-attacking queens on an 'n x n' chessboard. A queen can attack horizontally, vertically, and diagonally. Time Complexity = O(n!) because for each row, we try to place a queen, and the number of valid positions decreases as we place more queens. In the worst case, it's approximately n * (n-1) * (n-2) * ... Space Complexity = O(n*m) where 'n' is the number of rows and 'm' is the number of columns,

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SodokuSolver.cpp](./SodokuSolver.cpp)
**Description**: Contains implementation code for `SodokuSolver`.

**Key Functions & Signatures**:
- ` void print(int sodoku[][9]) `
- ` bool isSafe(int sodoku[9][9],int r,int c,int d) `
- ` bool sodokuSolver(int sodoku[9][9],int r,int c) `

**Algorithm / Logic Walkthrough**:
vertical; horizontal; in the box;

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [assignmentOne.cpp](./assignmentOne.cpp)
**Description**: Contains implementation code for `assignmentOne`.

**Key Functions & Signatures**:
- ` void solveMaze(int maze[][4],int x,int y,string sol,int n,vector<vector<bool>> vis) `
- ` void ways(int maze[][4],int n) `

**Algorithm / Logic Walkthrough**:
down right left

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [new.cpp](./new.cpp)
**Description**: Contains implementation code for `new`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Backtracking vs Recursion**: Backtracking is a subset of recursion where we undo changes made in the recursive step (pruning paths that do not lead to a solution).
- **N-Queens Complexity**: $O(N!)$ time complexity.
- **Sudoku Solver**: Time complexity is $O(9^{N^2})$ where $N$ is size of the board.