# Recursion

## Topic Overview
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem by breaking it down into smaller sub-problems. This section covers key aspects of recursion: base case, call stack, call recurrence relation, and classic problems like factorial, Fibonacci, checking sorted arrays, first/last occurrences, and power computations.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CheckIfArraySorted.cpp](./CheckIfArraySorted.cpp) | Contains implementation code for `CheckIfArraySorted`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [FirstOccurence.cpp](./FirstOccurence.cpp) | Contains implementation code for `FirstOccurence`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [LastOccurence.cpp](./LastOccurence.cpp) | Contains implementation code for `LastOccurence`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [PrintDecreasingNum.cpp](./PrintDecreasingNum.cpp) | Contains implementation code for `PrintDecreasingNum`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [PrintNthFibonaciNum.cpp](./PrintNthFibonaciNum.cpp) | Contains implementation code for `PrintNthFibonaciNum`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [PrintXtoPowerN.cpp](./PrintXtoPowerN.cpp) | Contains implementation code for `PrintXtoPowerN`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [RemoveDuplicateInString.cpp](./RemoveDuplicateInString.cpp) | Contains implementation code for `RemoveDuplicateInString`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [SumOfNNaturalNum.cpp](./SumOfNNaturalNum.cpp) | Contains implementation code for `SumOfNNaturalNum`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [TilingProblem.cpp](./TilingProblem.cpp) | Contains implementation code for `TilingProblem`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [TowerOfHanoi.cpp](./TowerOfHanoi.cpp) | Contains implementation code for `TowerOfHanoi`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [basic.cpp](./basic.cpp) | Contains implementation code for `basic`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [binaryString.cpp](./binaryString.cpp) | Contains implementation code for `binaryString`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [new.cpp](./new.cpp) | Contains implementation code for `new`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [subString.cpp](./subString.cpp) | Contains implementation code for `subString`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [teach.cpp](./teach.cpp) | Contains implementation code for `teach`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [CheckIfArraySorted.cpp](./CheckIfArraySorted.cpp)
**Description**: Contains implementation code for `CheckIfArraySorted`.

**Key Functions & Signatures**:
- ` bool isSorted(int *arr,int n,int i) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [FirstOccurence.cpp](./FirstOccurence.cpp)
**Description**: Contains implementation code for `FirstOccurence`.

**Key Functions & Signatures**:
- ` int FirstOcur(vector<int> arr,int k,int i) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LastOccurence.cpp](./LastOccurence.cpp)
**Description**: Contains implementation code for `LastOccurence`.

**Key Functions & Signatures**:
- ` int LastOcur(int *arr,int k,int i) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PrintDecreasingNum.cpp](./PrintDecreasingNum.cpp)
**Description**: Contains implementation code for `PrintDecreasingNum`.

**Key Functions & Signatures**:
- ` void print(int n) `

**Algorithm / Logic Walkthrough**:
cout<< n <<" "; infinte recursion cause stack overflow we should always write base case

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PrintNthFibonaciNum.cpp](./PrintNthFibonaciNum.cpp)
**Description**: Contains implementation code for `PrintNthFibonaciNum`.

**Key Functions & Signatures**:
- ` // int fibonacci(int n) `
- ` int fibonacci(int n) `
- ` void printFiboSeries(int n) `

**Algorithm / Logic Walkthrough**:
int fibonacci(int n) { if (n == 0) return 0; else if (n == 1) return 1; return fibonacci(n - 1) + fibonacci(n - 2); int main() { int n;

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PrintXtoPowerN.cpp](./PrintXtoPowerN.cpp)
**Description**: Contains implementation code for `PrintXtoPowerN`.

**Key Functions & Signatures**:
- ` long long Power(int n,int k) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [RemoveDuplicateInString.cpp](./RemoveDuplicateInString.cpp)
**Description**: Contains implementation code for `RemoveDuplicateInString`.

**Key Functions & Signatures**:
- ` void RemoveDuplicate(string str,string ans, int i,int map[26]) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [SumOfNNaturalNum.cpp](./SumOfNNaturalNum.cpp)
**Description**: Contains implementation code for `SumOfNNaturalNum`.

**Key Functions & Signatures**:
- ` int Sum(int n) `

**Algorithm / Logic Walkthrough**:
1+2+3+4+5+6

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [TilingProblem.cpp](./TilingProblem.cpp)
**Description**: Contains implementation code for `TilingProblem`.

**Key Functions & Signatures**:
- ` int Tp(int n) `

**Algorithm / Logic Walkthrough**:
vertical horizontal;

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [TowerOfHanoi.cpp](./TowerOfHanoi.cpp)
**Description**: Contains implementation code for `TowerOfHanoi`.

**Key Functions & Signatures**:
- ` void TowerOfHanoi(int n, string src, string helper, string dest) `

**Algorithm / Logic Walkthrough**:
Base case Step 1: Move n-1 disks from src → helper Step 2: Move nth (largest) disk from src → dest Step 3: Move n-1 disks from helper → dest

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [basic.cpp](./basic.cpp)
**Description**: Contains implementation code for `basic`.

**Key Functions & Signatures**:
- ` int factorial(int n) `

**Algorithm / Logic Walkthrough**:
it is a method to solving computational probelms where the soln dpends on soln to smaller instance of the same problem

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [binaryString.cpp](./binaryString.cpp)
**Description**: Contains implementation code for `binaryString`.

**Key Functions & Signatures**:
- ` void binstring(int n, string ans) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [new.cpp](./new.cpp)
**Description**: Contains implementation code for `new`.

**Key Functions & Signatures**:
- ` int factorial(int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [subString.cpp](./subString.cpp)
**Description**: Contains implementation code for `subString`.

**Key Functions & Signatures**:
- ` void printSubStr() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [teach.cpp](./teach.cpp)
**Description**: Contains implementation code for `teach`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Three Rules of Recursion**:
  1. **Base Case**: The termination condition that stops recursion.
  2. **Work/Process**: What the current call computes.
  3. **Recursive Call**: Calling the function again with smaller inputs.
- **Recursion Tree**: Useful for visualizing time complexity. Factorial is $O(N)$, Fibonacci is $O(2^N)$.