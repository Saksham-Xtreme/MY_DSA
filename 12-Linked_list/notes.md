# Linked Lists (Singly, Doubly, & Circular)

## Topic Overview
A Linked List is a linear data structure where elements are stored in nodes, and each node points to the next node in sequence. Unlike arrays, linked lists do not store elements in contiguous memory. This section details creation, insertion, deletion, reversal, finding the middle (Slow & Fast pointer technique), loop detection (Floyd's Cycle Finding algorithm), cycle removal, merge sort on linked lists, and zigzag rearrangement.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CircularLL.cpp](./CircularLL.cpp) | Contains implementation code for `CircularLL`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [Copy.cpp](./Copy.cpp) | Contains implementation code for `Copy`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [DoublyLL.cpp](./DoublyLL.cpp) | Contains implementation code for `DoublyLL`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [Floyd'sCycleFindingAlgo.cpp](./Floyd'sCycleFindingAlgo.cpp) | Contains implementation code for `Floyd'sCycleFindingAlgo`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [FloydsCycleFindingAlgo.cpp](./FloydsCycleFindingAlgo.cpp) | Contains implementation code for `FloydsCycleFindingAlgo`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [InsertLLinMiddle.cpp](./InsertLLinMiddle.cpp) | Contains implementation code for `InsertLLinMiddle`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [LLImplement.cpp](./LLImplement.cpp) | Contains implementation code for `LLImplement`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [LLbasics.cpp](./LLbasics.cpp) | Contains implementation code for `LLbasics`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [ListSTL.cpp](./ListSTL.cpp) | Contains implementation code for `ListSTL`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [MaxChainLength.cpp](./MaxChainLength.cpp) | Contains implementation code for `MaxChainLength`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [MergeSortinLL.cpp](./MergeSortinLL.cpp) | Implements **Merge Sort**, a divide-and-conquer sorting algorithm. | $O(N \log N)$ | $O(N)$ (for auxiliary storage during merge) |
| [RemovingCyle.cpp](./RemovingCyle.cpp) | Contains implementation code for `RemovingCyle`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [Untitled-2.cpp](./Untitled-2.cpp) | Contains implementation code for `Untitled-2`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [ZigZagLL.cpp](./ZigZagLL.cpp) | Contains implementation code for `ZigZagLL`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [findPointOfIntersectionOfYLL.cpp](./findPointOfIntersectionOfYLL.cpp) | Contains implementation code for `findPointOfIntersectionOfYLL`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [new.cpp](./new.cpp) | Contains implementation code for `new`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [praticeLL.cpp](./praticeLL.cpp) | Contains implementation code for `praticeLL`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [CircularLL.cpp](./CircularLL.cpp)
**Description**: Contains implementation code for `CircularLL`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void pop_front() `
- ` void pop_back() `
- ` void insertAtPos(int val, int pos) `
- ` void deleteAtPos(int pos) `
- ` void print() `

**Algorithm / Logic Walkthrough**:
INSERT AT FRONT INSERT AT END DELETE FRONT Single node case Reach the last node DELETE LAST

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Copy.cpp](./Copy.cpp)
**Description**: Contains implementation code for `Copy`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void pop_front() `
- ` void printll() `

**Algorithm / Logic Walkthrough**:
adding element from front pop front printing linked list

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DoublyLL.cpp](./DoublyLL.cpp)
**Description**: Contains implementation code for `DoublyLL`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void pop_front() `
- ` void pop_back() `
- ` void insertAtPosition(int val, int pos) `
- ` void deleteAtPosition(int pos) `
- ` void printForward() `
- ` void printBackward() `

**Algorithm / Logic Walkthrough**:
Insert at front Insert at end Delete from front Delete from end Insert at any position (1-based index) Delete from any position

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Floyd'sCycleFindingAlgo.cpp](./Floyd'sCycleFindingAlgo.cpp)
**Description**: Contains implementation code for `Floyd'sCycleFindingAlgo`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void pop_front() `
- ` void printll() `
- ` bool isCycle(Node* head) `

**Algorithm / Logic Walkthrough**:
adding element from front pop front printing linked list

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [FloydsCycleFindingAlgo.cpp](./FloydsCycleFindingAlgo.cpp)
**Description**: Contains implementation code for `FloydsCycleFindingAlgo`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void pop_front() `
- ` void printll() `
- ` bool isCycle(Node* head) `

**Algorithm / Logic Walkthrough**:
adding element from front pop front printing linked list check cycle

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [InsertLLinMiddle.cpp](./InsertLLinMiddle.cpp)
**Description**: Contains implementation code for `InsertLLinMiddle`.

**Key Functions & Signatures**:
- ` void printll() `

**Algorithm / Logic Walkthrough**:
printing linked list

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [LLImplement.cpp](./LLImplement.cpp)
**Description**: Contains implementation code for `LLImplement`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void insert(int val,int pos) `
- ` void printll() `

**Algorithm / Logic Walkthrough**:
temp is now at pos-1 i.e left

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LLbasics.cpp](./LLbasics.cpp)
**Description**: Contains implementation code for `LLbasics`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void insert(int val,int pos) `
- ` void printll() `
- ` void pop_front() `
- ` void pop_back() `
- ` int search(int val) `
- ` int helper(Node* temp,int val) `
- ` int searchRec(int val) `
- ` void reverse() `
- ` int Getsize() `
- ` void removeNth(int n) `

**Algorithm / Logic Walkthrough**:
Add element at front → O(1) Add element at end → O(1) if tail maintained Insert at position → O(n) 1 2 3 4->7-> 5 6 temp is now at pos-1 i.e left Print entire linked list

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [ListSTL.cpp](./ListSTL.cpp)
**Description**: Contains implementation code for `ListSTL`.

**Key Functions & Signatures**:
- ` void print(list<int> ll) `

**Algorithm / Logic Walkthrough**:
list_stl;

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

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
### [MergeSortinLL.cpp](./MergeSortinLL.cpp)
**Description**: Implements **Merge Sort**, a divide-and-conquer sorting algorithm.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void printll() `
- ` Node* splitMid(Node* head) `
- ` Node* merge(Node* l, Node* r) `
- ` Node* mergeSort(Node* head) `

**Algorithm / Logic Walkthrough**:
Recursively splits the array into two halves, sorts them individually, and then merges the sorted halves back together using two pointers.

**Complexity Analysis**:
- **Time Complexity**: $O(N \log N)$
- **Space Complexity**: $O(N)$ (for auxiliary storage during merge)

---
### [RemovingCyle.cpp](./RemovingCyle.cpp)
**Description**: Contains implementation code for `RemovingCyle`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void pop_front() `
- ` void printll() `
- ` void removeCycle(Node* head) `

**Algorithm / Logic Walkthrough**:
adding element from front pop front printing linked list delete cycle

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Untitled-2.cpp](./Untitled-2.cpp)
**Description**: Contains implementation code for `Untitled-2`.

**Key Functions & Signatures**:
- ` bool compare(pair<int, int> p1, pair<int, int> p2) `
- ` int maxChainLen(vector<pair<int, int>> pairs) `

**Algorithm / Logic Walkthrough**:
Function to compare pairs based on the second value Function to find the maximum chain length Sort pairs based on their second value

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [ZigZagLL.cpp](./ZigZagLL.cpp)
**Description**: Contains implementation code for `ZigZagLL`.

**Key Functions & Signatures**:
- ` void push_front(int val) `
- ` void push_back(int val) `
- ` void printll() `
- ` Node* splitMid(Node* head) `
- ` Node* merge(Node* l, Node* r) `
- ` Node* mergeSort(Node* head) `
- ` Node* reverse(Node* head) `
- ` Node* Zigzag(Node* head) `

**Algorithm / Logic Walkthrough**:
Split list into two halves Merge two sorted lists Merge Sort for Linked List Attach leftover nodes if first half ended before second

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [findPointOfIntersectionOfYLL.cpp](./findPointOfIntersectionOfYLL.cpp)
**Description**: Contains implementation code for `findPointOfIntersectionOfYLL`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [new.cpp](./new.cpp)
**Description**: Contains implementation code for `new`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [praticeLL.cpp](./praticeLL.cpp)
**Description**: Contains implementation code for `praticeLL`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Node Definition**: `struct Node { int data; Node* next; };`.
- **Slow and Fast Pointers**: `slow` moves 1 step, `fast` moves 2 steps. Useful for finding the middle node ($O(N)$) and cycle detection.
- **Cycle Detection (Floyd's)**: If `slow == fast` at some point, a cycle exists. To find cycle start, reset `slow` to `head` and move both 1 step at a time until they meet again.