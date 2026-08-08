# Deques (Double-Ended Queues)

## Topic Overview
A Deque (Double-Ended Queue) is a sequence container that allows insertion and deletion at both the front and the rear. This folder explores deque usage, its STL implementation (`std::deque`), and applications like implementing stacks/queues using deques, and the Sliding Window Maximum problem.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [DequeSTL.cpp](./DequeSTL.cpp) | Contains implementation code for `DequeSTL`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [QueueUsingDeque.cpp](./QueueUsingDeque.cpp) | Contains implementation code for `QueueUsingDeque`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [StackUsingDeque.cpp](./StackUsingDeque.cpp) | Contains implementation code for `StackUsingDeque`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [DequeSTL.cpp](./DequeSTL.cpp)
**Description**: Contains implementation code for `DequeSTL`.

**Algorithm / Logic Walkthrough**:
double ended queue

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [QueueUsingDeque.cpp](./QueueUsingDeque.cpp)
**Description**: Contains implementation code for `QueueUsingDeque`.

**Key Functions & Signatures**:
- ` void push(int data) `
- ` void pop() `
- ` int front() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [StackUsingDeque.cpp](./StackUsingDeque.cpp)
**Description**: Contains implementation code for `StackUsingDeque`.

**Key Functions & Signatures**:
- ` void push(int data) `
- ` void pop() `
- ` int top() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Deque STL Operations**: `push_front()`, `push_back()`, `pop_front()`, `pop_back()` all run in $O(1)$ time.
- **Sliding Window Maximum**: Maintain a monotonic deque storing indices of elements in decreasing order. Remove elements outside window `(i - k)` and elements smaller than current element. Front of deque is the max for the window. Runs in $O(N)$ time.