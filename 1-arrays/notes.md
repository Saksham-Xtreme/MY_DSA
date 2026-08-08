# Arrays & Basic Operations

## Topic Overview
An array is a linear data structure containing elements of the same data type stored in contiguous memory locations. This section covers standard operations like element insertion, deletion, searching (linear and binary search), reversing arrays, subarray operations, and advanced array algorithms like Kadane's Algorithm for Maximum Subarray Sum, Trapping Rainwater, and the Best Time to Buy and Sell Stock.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [InsertAndDeleteAtAnyPoint.cpp](./InsertAndDeleteAtAnyPoint.cpp) | Contains implementation code for `InsertAndDeleteAtAnyPoint`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PointerArray.cpp](./PointerArray.cpp) | Contains implementation code for `PointerArray`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [Study.cpp](./Study.cpp) | Contains implementation code for `Study`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [assignment 1.cpp](./assignment 1.cpp) | Contains implementation code for `assignment 1`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [assignmentOne.cpp](./assignmentOne.cpp) | Contains implementation code for `assignmentOne`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [buyAndSell.cpp](./buyAndSell.cpp) | Solves the **Best Time to Buy and Sell Stock** problem to maximize profit from a single transaction. | $O(N)$ | $O(1)$ |
| [kadaneAlgorithim.cpp](./kadaneAlgorithim.cpp) | Implements **Kadane's Algorithm** to find the maximum sum of a contiguous subarray in $O(N)$ time. | $O(N)$ | $O(1)$ |
| [maxSubArrayOptimise.cpp](./maxSubArrayOptimise.cpp) | Contains implementation code for `maxSubArrayOptimise`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [maxSubArraySum.cpp](./maxSubArraySum.cpp) | Contains implementation code for `maxSubArraySum`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [printSubArray.cpp](./printSubArray.cpp) | Contains implementation code for `printSubArray`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [reverseArr.cpp](./reverseArr.cpp) | Contains implementation code for `reverseArr`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [trappingRainwater.cpp](./trappingRainwater.cpp) | Computes the total water that can be trapped between bars of a given elevation map. | $O(N)$ | $O(N)$ |
| [userInputARRAY.cpp](./userInputARRAY.cpp) | Contains implementation code for `userInputARRAY`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [InsertAndDeleteAtAnyPoint.cpp](./InsertAndDeleteAtAnyPoint.cpp)
**Description**: Contains implementation code for `InsertAndDeleteAtAnyPoint`.

**Key Functions & Signatures**:
- ` void insertAtPos(int arr[], int &size, int pos, int value) `
- ` void deleteAtPos(int arr[], int &size, int pos) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PointerArray.cpp](./PointerArray.cpp)
**Description**: Contains implementation code for `PointerArray`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Study.cpp](./Study.cpp)
**Description**: Contains implementation code for `Study`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [assignment 1.cpp](./assignment 1.cpp)
**Description**: Contains implementation code for `assignment 1`.

**Key Functions & Signatures**:
- ` bool repeat(int *nums,int n) `

**Algorithm / Logic Walkthrough**:
Givenanintegerarraynums,returntrueifanyvalueappearsatleasttwiceinthearray,andreturnfalseifeveryelementisdistinct

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [assignmentOne.cpp](./assignmentOne.cpp)
**Description**: Contains implementation code for `assignmentOne`.

**Key Functions & Signatures**:
- ` void repeat(int *nums,int n) `

**Algorithm / Logic Walkthrough**:
Givenanintegerarraynums,returntrueifanyvalueappearsatleasttwiceinthearray,andreturnfalseifeveryelementisdistinct

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [buyAndSell.cpp](./buyAndSell.cpp)
**Description**: Solves the **Best Time to Buy and Sell Stock** problem to maximize profit from a single transaction.

**Key Functions & Signatures**:
- ` void maxProfit(int *prices, int n) `

**Algorithm / Logic Walkthrough**:
It tracks the minimum price seen so far (buying price) and calculates the potential profit if sold on the current day. If the potential profit is higher than the maximum profit recorded, it updates the max profit.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

---
### [kadaneAlgorithim.cpp](./kadaneAlgorithim.cpp)
**Description**: Implements **Kadane's Algorithm** to find the maximum sum of a contiguous subarray in $O(N)$ time.

**Key Functions & Signatures**:
- ` void maxSubArraySum3(int *arr,int n) `

**Algorithm / Logic Walkthrough**:
It iterates through the array, adding the current element to `currSum`. If `currSum` becomes negative, it resets `currSum = 0` since a negative sum won't contribute to maximizing subsequent subarrays. At each step, it updates `maxSum` with the maximum value of `currSum` seen so far.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(1)$

---
### [maxSubArrayOptimise.cpp](./maxSubArrayOptimise.cpp)
**Description**: Contains implementation code for `maxSubArrayOptimise`.

**Key Functions & Signatures**:
- ` void maxSubArraySum2(int *arr, int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [maxSubArraySum.cpp](./maxSubArraySum.cpp)
**Description**: Contains implementation code for `maxSubArraySum`.

**Key Functions & Signatures**:
- ` void maxSubArraySum1(int *arr, int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [printSubArray.cpp](./printSubArray.cpp)
**Description**: Contains implementation code for `printSubArray`.

**Key Functions & Signatures**:
- ` void printSubarray(int *arr,int n) `

**Algorithm / Logic Walkthrough**:
cout<<"("<< start << ","<< end <<") ";

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [reverseArr.cpp](./reverseArr.cpp)
**Description**: Contains implementation code for `reverseArr`.

**Key Functions & Signatures**:
- ` void printArr(int *arr , int n) `

**Algorithm / Logic Walkthrough**:
1 2 3 4 4 2 3 1 4 3 2 1 O(log n) SC = 0;

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [trappingRainwater.cpp](./trappingRainwater.cpp)
**Description**: Computes the total water that can be trapped between bars of a given elevation map.

**Key Functions & Signatures**:
- ` int trap(int *heights,int n) `

**Algorithm / Logic Walkthrough**:
It precomputes two auxiliary arrays: `leftMax[i]` (stores the tallest bar to the left of index `i`) and `rightMax[i]` (stores the tallest bar to the right of index `i`). For each bar, the water trapped is given by `min(leftMax[i], rightMax[i]) - height[i]`. The total sum of these values is the answer.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$
- **Space Complexity**: $O(N)$

---
### [userInputARRAY.cpp](./userInputARRAY.cpp)
**Description**: Contains implementation code for `userInputARRAY`.

**Algorithm / Logic Walkthrough**:
int *arr = new int[n];

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Contiguous Memory**: Accessing element at index `i` is $O(1)$ time: `arr[i]`.
- **Kadane's Algorithm**: Used to find maximum subarray sum in $O(N)$ time. Maintain `currSum` and `maxSum`. If `currSum < 0`, reset it to `0`.
- **Trapping Rainwater**: Precompute `leftMax` and `rightMax` arrays to find trapped water at each bar in $O(N)$ time and $O(N)$ auxiliary space.
- **Binary Search**: Works on sorted arrays. Time complexity is $O(\log N)$.