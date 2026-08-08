# Dynamic Programming (DP)

## Topic Overview
Dynamic Programming is an algorithmic technique for solving optimization problems by breaking them down into simpler sub-problems and utilizing the fact that the optimal solution to the overall problem depends on the optimal solutions to its sub-problems. It utilizes Memoization (Top-down approach) or Tabulation (Bottom-up approach) to store results of sub-problems and avoid redundant calculations.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CountBst.cpp](./Catlan/CountBst.cpp) | Contains implementation code for `CountBst`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [NthCatlan.cpp](./Catlan/NthCatlan.cpp) | Contains implementation code for `NthCatlan`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [ClimbingStairs.cpp](./FibonnaciProblem/ClimbingStairs.cpp) | Contains implementation code for `ClimbingStairs`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [Fibonnaci.cpp](./FibonnaciProblem/Fibonnaci.cpp) | Contains implementation code for `Fibonnaci`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [01Knapsack.cpp](./KnapsackProblem/01Knapsack.cpp) | Contains implementation code for `01Knapsack`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [RodCutting.cpp](./KnapsackProblem/RodCutting.cpp) | Contains implementation code for `RodCutting`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [TargetSum.cpp](./KnapsackProblem/TargetSum.cpp) | Contains implementation code for `TargetSum`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [UnboundedKnapSack.cpp](./KnapsackProblem/UnboundedKnapSack.cpp) | Contains implementation code for `UnboundedKnapSack`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [coinchange.cpp](./KnapsackProblem/coinchange.cpp) | Contains implementation code for `coinchange`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [LongIncSubseq.cpp](./LongestCommonSeq/LongIncSubseq.cpp) | Contains implementation code for `LongIncSubseq`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [LongestComSubstr.cpp](./LongestCommonSeq/LongestComSubstr.cpp) | Contains implementation code for `LongestComSubstr`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [new.cpp](./LongestCommonSeq/new.cpp) | Contains implementation code for `new`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [mcm.cpp](./MCM/mcm.cpp) | Contains implementation code for `mcm`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [CountBst.cpp](./Catlan/CountBst.cpp)
**Description**: Contains implementation code for `CountBst`.

**Algorithm / Logic Walkthrough**:
find all possible unique Bsts can be formned using n nodes n=2, ans = 2 ; n =3  ans = 5; n=0, n=1 , ans = 1

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [NthCatlan.cpp](./Catlan/NthCatlan.cpp)
**Description**: Contains implementation code for `NthCatlan`.

**Key Functions & Signatures**:
- ` int  nthCatlanRec(int n) `
- ` int  nthCatlanMemo(int n, vector<int> &dp) `
- ` int  nthCatlanTab(int n ) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [ClimbingStairs.cpp](./FibonnaciProblem/ClimbingStairs.cpp)
**Description**: Contains implementation code for `ClimbingStairs`.

**Key Functions & Signatures**:
- ` int CountWaysRec(int n) `
- ` int CountWaysMemo(int n, vector<int> &f) `
- ` int CountWaysTab(int n) `

**Algorithm / Logic Walkthrough**:
with tabulation;

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Fibonnaci.cpp](./FibonnaciProblem/Fibonnaci.cpp)
**Description**: Contains implementation code for `Fibonnaci`.

**Key Functions & Signatures**:
- ` int fibDP(int n, vector<int> &f) `
- ` int fibDPT(int n) `

**Algorithm / Logic Walkthrough**:
memonization with tabulation;

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [01Knapsack.cpp](./KnapsackProblem/01Knapsack.cpp)
**Description**: Contains implementation code for `01Knapsack`.

**Key Functions & Signatures**:
- ` int knapSacRec(vector<int> val, vector<int> wt, int W, int n){ // O(2^n); `
- ` int knapSacMem(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){  // O(n*w) `
- ` int knapSacTab(vector<int> val, vector<int> wt, int W, int n) `

**Algorithm / Logic Walkthrough**:
0-1 knapSack include exclude Using Memoistation include exclude

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [RodCutting.cpp](./KnapsackProblem/RodCutting.cpp)
**Description**: Contains implementation code for `RodCutting`.

**Key Functions & Signatures**:
- ` int Cutting( vector<int> price, vector<int> length, int rodLen ) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [TargetSum.cpp](./KnapsackProblem/TargetSum.cpp)
**Description**: Contains implementation code for `TargetSum`.

**Key Functions & Signatures**:
- ` bool targetSum(vector<int> nums, int target) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [UnboundedKnapSack.cpp](./KnapsackProblem/UnboundedKnapSack.cpp)
**Description**: Contains implementation code for `UnboundedKnapSack`.

**Key Functions & Signatures**:
- ` int Unbounded(vector<int> val, vector<int> wt, int W, int n) `

**Algorithm / Logic Walkthrough**:
using tabulation

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [coinchange.cpp](./KnapsackProblem/coinchange.cpp)
**Description**: Contains implementation code for `coinchange`.

**Key Functions & Signatures**:
- ` int change(int amount, vector<int>& coins) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LongIncSubseq.cpp](./LongestCommonSeq/LongIncSubseq.cpp)
**Description**: Contains implementation code for `LongIncSubseq`.

**Key Functions & Signatures**:
- ` int helper(vector<int> nums, vector<int> arr) `
- ` int lengthOfLIS(vector<int>& nums) `

**Algorithm / Logic Walkthrough**:
ans = max(ans, dp[i][j]); return ans;

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LongestComSubstr.cpp](./LongestCommonSeq/LongestComSubstr.cpp)
**Description**: Contains implementation code for `LongestComSubstr`.

**Key Functions & Signatures**:
- ` int lcStrTab(string str1,  string str2) `

**Algorithm / Logic Walkthrough**:
using tabulation

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [new.cpp](./LongestCommonSeq/new.cpp)
**Description**: Contains implementation code for `new`.

**Key Functions & Signatures**:
- ` int lcsRec(string str1, string str2){   // O(2^(n+m)); `
- ` int lcsMemo( string str1,  string str2 ,  vector<vector<int>> &dp) `
- ` int LcsTab(string str1,  string str2) `

**Algorithm / Logic Walkthrough**:
using Memoization using tabulation

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [mcm.cpp](./MCM/mcm.cpp)
**Description**: Contains implementation code for `mcm`.

**Key Functions & Signatures**:
- ` int mcmRec(vector<int>& arr, int i, int j) `
- ` int mcmMemo(vector<int>& arr, int i, int j, vector<vector<int>> &dp) `
- ` int mcmTab(vector<int>& arr) `

**Algorithm / Logic Walkthrough**:
length = 2 means single matrix, cost = 0 (already initialized)

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Two Properties of DP**:
  1. **Overlapping Subproblems**: Subproblems are solved repeatedly (e.g., Fibonacci).
  2. **Optimal Substructure**: Optimal solution of the main problem contains optimal solutions of subproblems.
- **DP vs Recursion**: Recursion is $O(2^N)$ for Fibonacci, whereas DP reduces it to $O(N)$ by caching states.
- **Common Problems**: 0-1 Knapsack, Longest Common Subsequence (LCS), Edit Distance, Coin Change.