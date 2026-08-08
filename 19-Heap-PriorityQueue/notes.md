# Heaps & Priority Queues

## Topic Overview
A Heap is a special tree-based data structure that satisfies the heap property: in a Max-Heap, the key of a node is greater than or equal to the keys of its children; in a Min-Heap, it is smaller than or equal. Heaps are typically implemented as binary trees stored in arrays. This folder details Heap operations (push, pop, heapify), Heap Sort, and applications like finding nearby cars, connecting N ropes, weak soldier ranking, and sliding window maximum.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [ConnectNRopes.cpp](./ConnectNRopes.cpp) | Contains implementation code for `ConnectNRopes`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [HeapIntro.cpp](./HeapIntro.cpp) | Contains implementation code for `HeapIntro`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [HeapSort.cpp](./HeapSort.cpp) | Contains implementation code for `HeapSort`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [NearbyCars.cpp](./NearbyCars.cpp) | Contains implementation code for `NearbyCars`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PQforObject.cpp](./PQforObject.cpp) | Contains implementation code for `PQforObject`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [PQforPair.cpp](./PQforPair.cpp) | Contains implementation code for `PQforPair`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [PriorityQueuePQ.cpp](./PriorityQueuePQ.cpp) | Contains implementation code for `PriorityQueuePQ`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PushAndPopInHeap.cpp](./PushAndPopInHeap.cpp) | Contains implementation code for `PushAndPopInHeap`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [SlidingWindow.cpp](./SlidingWindow.cpp) | Contains implementation code for `SlidingWindow`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [weakestSoldier.cpp](./weakestSoldier.cpp) | Contains implementation code for `weakestSoldier`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [ConnectNRopes.cpp](./ConnectNRopes.cpp)
**Description**: Contains implementation code for `ConnectNRopes`.

**Key Functions & Signatures**:
- ` int connectN(vector<int> ropes) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HeapIntro.cpp](./HeapIntro.cpp)
**Description**: Contains implementation code for `HeapIntro`.

**Algorithm / Logic Walkthrough**:
A heap is a specific type of binary tree with two key properties. 1. It must be a **complete binary tree (CBT)**. - A CBT is a binary tree where every level is completely filled, except possibly the last one, which is filled from left to right. This structure is what allows for an efficient array-based representation. 2. It must satisfy the **heap property**.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HeapSort.cpp](./HeapSort.cpp)
**Description**: Contains implementation code for `HeapSort`.

**Key Functions & Signatures**:
- ` void heapify(int i, vector<int> &arr, int n) `
- ` void heapSort(vector<int> &arr) `

**Algorithm / Logic Walkthrough**:
This program implements the Heap Sort algorithm to sort a vector of integers in ascending order. The algorithm consists of two main phases: 1. Building a Max Heap: The `heapSort` function first converts the input vector into a max heap. A max heap is a complete binary tree where the value of each node is greater than or equal to the values of its children. This is done by calling the `heapify` function on all non-leaf nodes, starting from the last one and moving up to the root.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [NearbyCars.cpp](./NearbyCars.cpp)
**Description**: Contains implementation code for `NearbyCars`.

**Key Functions & Signatures**:
- ` void NC(vector<pair<int, int>> pos ,int K) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PQforObject.cpp](./PQforObject.cpp)
**Description**: Contains implementation code for `PQforObject`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PQforPair.cpp](./PQforPair.cpp)
**Description**: Contains implementation code for `PQforPair`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PriorityQueuePQ.cpp](./PriorityQueuePQ.cpp)
**Description**: Contains implementation code for `PriorityQueuePQ`.

**Algorithm / Logic Walkthrough**:
Heap/priority queue priority_queue<int> pq; // max heap by default pq.push(5); pq.push(10); pq.push(3); while(!pq.empty()){ // descending order

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PushAndPopInHeap.cpp](./PushAndPopInHeap.cpp)
**Description**: Contains implementation code for `PushAndPopInHeap`.

**Key Functions & Signatures**:
- ` void push(int val){ // O(logn) `
- ` void heapify(int i) `
- ` void pop() `
- ` int top() `
- ` bool empty() `

**Algorithm / Logic Walkthrough**:
fix to push in heap we first { heap -> insert(value) push_back then, fix heap ->  Tc : O(logn) P-C relation ship

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SlidingWindow.cpp](./SlidingWindow.cpp)
**Description**: Contains implementation code for `SlidingWindow`.

**Key Functions & Signatures**:
- ` void slidingWindowMax(vector<int> arr, int K) `

**Algorithm / Logic Walkthrough**:
Notes on the Code This program solves the Sliding Window Maximum problem using a priority queue (max-heap). The goal is to find the maximum value within a sliding window of size K as it moves across an array. Priority Queue (std::priority_queue): The priority queue stores pairs of (value, index) from the input array. It's configured as a max-heap, so the element with the highest value is always at the top. Initialization: The algorithm first populates the priority queue with the first K elements of the array. The maximum of this initial window is then printed. Sliding Window Logic: The program then iterates through the rest of the array, from index K to the end. In each step, it performs two key operations: 1. Remove Out-of-Window Elements: A while loop checks if the top element's index (pq.top().second) is no longer within the current window (i.e., its index is less than or equal to i-K). If it's outside the window, it's removed from the priority queue.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [weakestSoldier.cpp](./weakestSoldier.cpp)
**Description**: Contains implementation code for `weakestSoldier`.

**Key Functions & Signatures**:
- ` void weakestSoldier(vector<vector<int>> mtx, int K) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Array Representation**: For node at index `i`:
  - Left Child: `2 * i + 1`
  - Right Child: `2 * i + 2`
  - Parent: `(i - 1) / 2`
- **Heap Operations**: Insert is $O(\log N)$, Delete Min/Max is $O(\log N)$, Heapify is $O(\log N)$. Building heap from array takes $O(N)$ time.
- **C++ STL**: `std::priority_queue<int>` is a Max-Heap. For Min-Heap, use `std::priority_queue<int, std::vector<int>, std::greater<int>>`.