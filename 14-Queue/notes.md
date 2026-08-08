# Queues

## Topic Overview
A Queue is a linear data structure that follows the FIFO (First In First Out) principle. It supports enqueue (insertion at rear), dequeue (deletion from front), front, and rear operations. This folder covers queue implementations using arrays and linked lists, queue using two stacks, stack using two queues, non-repeating character streams, and queue reversal.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CircularQueueUsingArray.cpp](./CircularQueueUsingArray.cpp) | Contains implementation code for `CircularQueueUsingArray`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [InterLeave.cpp](./InterLeave.cpp) | Contains implementation code for `InterLeave`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [NonRepeatingLetter.cpp](./NonRepeatingLetter.cpp) | Contains implementation code for `NonRepeatingLetter`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [QueueReversal.cpp](./QueueReversal.cpp) | Contains implementation code for `QueueReversal`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [QueueUsing2Stacks.cpp](./QueueUsing2Stacks.cpp) | Contains implementation code for `QueueUsing2Stacks`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [QueueinSTL.cpp](./QueueinSTL.cpp) | Contains implementation code for `QueueinSTL`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [StackUsing2Queues.cpp](./StackUsing2Queues.cpp) | Contains implementation code for `StackUsing2Queues`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [firstNonRepeatingChar.cpp](./firstNonRepeatingChar.cpp) | Contains implementation code for `firstNonRepeatingChar`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [usingLL.cpp](./usingLL.cpp) | Contains implementation code for `usingLL`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [CircularQueueUsingArray.cpp](./CircularQueueUsingArray.cpp)
**Description**: Contains implementation code for `CircularQueueUsingArray`.

**Key Functions & Signatures**:
- ` void push(int data) `
- ` void pop() `
- ` int front() `
- ` bool empty() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [InterLeave.cpp](./InterLeave.cpp)
**Description**: Contains implementation code for `InterLeave`.

**Key Functions & Signatures**:
- ` void interLeave(queue<int> &org) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [NonRepeatingLetter.cpp](./NonRepeatingLetter.cpp)
**Description**: Contains implementation code for `NonRepeatingLetter`.

**Key Functions & Signatures**:
- ` void FirstNonRepeat(string str) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [QueueReversal.cpp](./QueueReversal.cpp)
**Description**: Contains implementation code for `QueueReversal`.

**Key Functions & Signatures**:
- ` void QueueReversal( queue<int> &Q) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [QueueUsing2Stacks.cpp](./QueueUsing2Stacks.cpp)
**Description**: Contains implementation code for `QueueUsing2Stacks`.

**Key Functions & Signatures**:
- ` void push(int data) `
- ` void pop() `
- ` int front(){ // Changed return type to int `
- ` bool empty() `

**Algorithm / Logic Walkthrough**:
s1 -> s2 s2 -> s1

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [QueueinSTL.cpp](./QueueinSTL.cpp)
**Description**: Contains implementation code for `QueueinSTL`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [StackUsing2Queues.cpp](./StackUsing2Queues.cpp)
**Description**: Contains implementation code for `StackUsing2Queues`.

**Key Functions & Signatures**:
- ` void push(int data) `
- ` int pop() `
- ` int top() `
- ` bool empty() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [firstNonRepeatingChar.cpp](./firstNonRepeatingChar.cpp)
**Description**: Contains implementation code for `firstNonRepeatingChar`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [usingLL.cpp](./usingLL.cpp)
**Description**: Contains implementation code for `usingLL`.

**Key Functions & Signatures**:
- ` void push(int val) `
- ` void pop() `
- ` int front() `
- ` bool empty() `
- ` //     void push(int val) `
- ` //     void pop() `
- ` //     int front() `
- ` //     bool empty() `

**Algorithm / Logic Walkthrough**:
push → insert at back pop → remove from front front element empty check class Node { public:

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Queue Operations**: Enqueue and Dequeue are $O(1)$ in a standard queue.
- **Queue using Stacks**: Can make either push or pop costly. If push is costly: transfer all to Stack2, push element to Stack1, transfer back to Stack1. Cost is $O(N)$ per push.