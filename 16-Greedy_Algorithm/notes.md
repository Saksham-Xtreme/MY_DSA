# Greedy Algorithms

## Topic Overview
A Greedy algorithm builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit (local optimum) in hopes of finding the global optimum. This section covers problems like Activity Selection, Fractional Knapsack, Minimum Absolute Difference Pair, Maximum Chain of Pairs, Indian Coin change, and Job Sequencing.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [ActivitySelection.cpp](./ActivitySelection.cpp) | Implements **Selection Sort**, an in-place comparison sorting algorithm. | $O(N^2)$ | $O(1)$ |
| [FractionalKnapsack.cpp](./FractionalKnapsack.cpp) | Contains implementation code for `FractionalKnapsack`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [IndianCoin.cpp](./IndianCoin.cpp) | Contains implementation code for `IndianCoin`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [JobSequencingProblem.cpp](./JobSequencingProblem.cpp) | Contains implementation code for `JobSequencingProblem`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [JobSequencingProblemDiffMethod.cpp](./JobSequencingProblemDiffMethod.cpp) | Contains implementation code for `JobSequencingProblemDiffMethod`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [MaxChainLength.cpp](./MaxChainLength.cpp) | Contains implementation code for `MaxChainLength`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [MinAbsoluteDifferencePairs.cpp](./MinAbsoluteDifferencePairs.cpp) | Contains implementation code for `MinAbsoluteDifferencePairs`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [Pair.cpp](./Pair.cpp) | Contains implementation code for `Pair`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [ActivitySelection.cpp](./ActivitySelection.cpp)
**Description**: Implements **Selection Sort**, an in-place comparison sorting algorithm.

**Key Functions & Signatures**:
- ` int maxActSel( vector<int> start,vector<int> end) `

**Algorithm / Logic Walkthrough**:
It divides the input list into two parts: a sorted sublist at the left and an unsorted sublist at the right. It repeatedly finds the smallest element in the unsorted sublist and swaps it with the leftmost unsorted element.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$
- **Space Complexity**: $O(1)$

---
### [FractionalKnapsack.cpp](./FractionalKnapsack.cpp)
**Description**: Contains implementation code for `FractionalKnapsack`.

**Key Functions & Signatures**:
- ` bool compare(pair<double, int> p1, pair<double, int> p2) `
- ` int fractionalKnapsack(vector<int> val,vector<int> wt, int W) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [IndianCoin.cpp](./IndianCoin.cpp)
**Description**: Contains implementation code for `IndianCoin`.

**Key Functions & Signatures**:
- ` int getMinChange(vector<int> coin, int V) `

**Algorithm / Logic Walkthrough**:
Function to calculate the minimum number of coins required for a given value Traverse the coin denominations in descending order Output the result List of available coin denominations (sorted in ascending order) Call the function to calculate the minimum number of coins

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [JobSequencingProblem.cpp](./JobSequencingProblem.cpp)
**Description**: Contains implementation code for `JobSequencingProblem`.

**Key Functions & Signatures**:
- ` bool compare(pair<int, int> p1, pair<int, int> p2) `
- ` int maxProfit( vector<pair<int,int>> jobs) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [JobSequencingProblemDiffMethod.cpp](./JobSequencingProblemDiffMethod.cpp)
**Description**: Contains implementation code for `JobSequencingProblemDiffMethod`.

**Key Functions & Signatures**:
- ` int maxProfit(vector<Job> jobs) `

**Algorithm / Logic Walkthrough**:
This problem is a classic greedy algorithm problem. We want to find the maximum total profit that can be obtained from a set of jobs, where each job has a deadline and a profit, and each job takes one unit of time. Define a Job class to encapsulate job properties: deadline and profit. A constructor is a clean way to initialize the members. The main function to calculate the maximum profit using a greedy approach.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MaxChainLength.cpp](./MaxChainLength.cpp)
**Description**: Contains implementation code for `MaxChainLength`.

**Key Functions & Signatures**:
- ` bool compare(pair<int, int> p1, pair<int, int> p2) `
- ` int maxChainLen(vector<pair<int, int>> pairs) `

**Algorithm / Logic Walkthrough**:
Function to compare pairs based on the second value Function to find the maximum chain length Sort pairs based on their second value

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MinAbsoluteDifferencePairs.cpp](./MinAbsoluteDifferencePairs.cpp)
**Description**: Contains implementation code for `MinAbsoluteDifferencePairs`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Pair.cpp](./Pair.cpp)
**Description**: Contains implementation code for `Pair`.

**Key Functions & Signatures**:
- ` bool compare(pair<int, int> p1, pair<int, int> p2) `
- ` int maxActSel(vector<pair<int, int>> &act) `

**Algorithm / Logic Walkthrough**:
Function to compare pairs based on the second value (end time) Function to find the maximum number of non-overlapping activities Sort activities based on their end time Create a vector of pairs to store activities (start time, end time) Find the maximum number of non-overlapping activities

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Greedy Strategy**: Sort inputs based on a specific attribute (e.g., end time in Activity Selection, value/weight ratio in Knapsack, deadlines in Job Sequencing).
- **Complexity**: Typically dominated by sorting: $O(N \log N)$ time.