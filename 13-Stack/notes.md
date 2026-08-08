# Stacks

## Topic Overview
A Stack is a linear data structure that follows the LIFO (Last In First Out) principle. It supports operations like push (insertion at top), pop (deletion from top), peek (top element), and isEmpty. This section covers stack implementation using arrays, vectors, and linked lists, and advanced stack problems like the Stock Span problem, Next Greater Element, Valid Parentheses, Duplicate Parentheses, and Max Area in Histogram.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [ClassTemplete.cpp](./ClassTemplete.cpp) | Contains implementation code for `ClassTemplete`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [MaxAreainHistogram.cpp](./MaxAreainHistogram.cpp) | Contains implementation code for `MaxAreainHistogram`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [Nextgreater.cpp](./Nextgreater.cpp) | Contains implementation code for `Nextgreater`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PushAtBottom.cpp](./PushAtBottom.cpp) | Contains implementation code for `PushAtBottom`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [STLstack.cpp](./STLstack.cpp) | Contains implementation code for `STLstack`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [StockSpan.cpp](./StockSpan.cpp) | Contains implementation code for `StockSpan`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [ValidParentheses.cpp](./ValidParentheses.cpp) | Contains implementation code for `ValidParentheses`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [ValidParenthesis.cpp](./ValidParenthesis.cpp) | Contains implementation code for `ValidParenthesis`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [duplicateParentheses.cpp](./duplicateParentheses.cpp) | Contains implementation code for `duplicateParentheses`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [hell.cpp](./hell.cpp) | Contains implementation code for `hell`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [new.cpp](./new.cpp) | Contains implementation code for `new`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [revStack.cpp](./revStack.cpp) | Contains implementation code for `revStack`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [revString.cpp](./revString.cpp) | Contains implementation code for `revString`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [stackUsingVec.cpp](./stackUsingVec.cpp) | Contains implementation code for `stackUsingVec`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [usingLL.cpp](./usingLL.cpp) | Contains implementation code for `usingLL`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [ClassTemplete.cpp](./ClassTemplete.cpp)
**Description**: Contains implementation code for `ClassTemplete`.

**Key Functions & Signatures**:
- ` void push(T val){   // O(1) `
- ` void pop(){  // O(1) `
- ` bool isEmpty() `

**Algorithm / Logic Walkthrough**:
if(isEmpty()){ cout << "stack is empty\n"; return -1;   // error code

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MaxAreainHistogram.cpp](./MaxAreainHistogram.cpp)
**Description**: Contains implementation code for `MaxAreainHistogram`.

**Key Functions & Signatures**:
- ` void MaxArea(vector<int> height) `

**Algorithm / Logic Walkthrough**:
next smaller left next smaller right

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Nextgreater.cpp](./Nextgreater.cpp)
**Description**: Contains implementation code for `Nextgreater`.

**Key Functions & Signatures**:
- ` void nextgreater(vector<int> arr, vector<int> ans) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PushAtBottom.cpp](./PushAtBottom.cpp)
**Description**: Contains implementation code for `PushAtBottom`.

**Key Functions & Signatures**:
- ` void PushAtBottom(stack<int> &s,int val) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [STLstack.cpp](./STLstack.cpp)
**Description**: Contains implementation code for `STLstack`.

**Algorithm / Logic Walkthrough**:
STL

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [StockSpan.cpp](./StockSpan.cpp)
**Description**: Contains implementation code for `StockSpan`.

**Key Functions & Signatures**:
- ` void stockspan(vector<int>& stock, vector<int>& span) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [ValidParentheses.cpp](./ValidParentheses.cpp)
**Description**: Contains implementation code for `ValidParentheses`.

**Key Functions & Signatures**:
- ` bool isValid(string str) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [ValidParenthesis.cpp](./ValidParenthesis.cpp)
**Description**: Contains implementation code for `ValidParenthesis`.

**Key Functions & Signatures**:
- ` bool isValid(string str) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [duplicateParentheses.cpp](./duplicateParentheses.cpp)
**Description**: Contains implementation code for `duplicateParentheses`.

**Key Functions & Signatures**:
- ` bool Duplicate(string str) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [hell.cpp](./hell.cpp)
**Description**: Contains implementation code for `hell`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [new.cpp](./new.cpp)
**Description**: Contains implementation code for `new`.

**Key Functions & Signatures**:
- ` void push(int val){   // O(1) `
- ` void pop(){  // O(1) `
- ` int top(){ // O(1) `
- ` bool isEmpty() `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [revStack.cpp](./revStack.cpp)
**Description**: Contains implementation code for `revStack`.

**Key Functions & Signatures**:
- ` void PushAtBottom(stack<int> &s,int val) `
- ` void reverse(stack<int> &s) `
- ` void print(stack<int> s) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [revString.cpp](./revString.cpp)
**Description**: Contains implementation code for `revString`.

**Key Functions & Signatures**:
- ` string rev(string str) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [stackUsingVec.cpp](./stackUsingVec.cpp)
**Description**: Contains implementation code for `stackUsingVec`.

**Key Functions & Signatures**:
- ` void push(int val){   // O(1) `
- ` void pop(){  // O(1) `
- ` int top(){ // O(1) `
- ` bool isEmpty() `
- ` //     void push(int val) `
- ` //     void pop() `
- ` //     int top() `
- ` //     bool isEmpty() `

**Algorithm / Logic Walkthrough**:
class Stack { private: int arr[100];   // static array (size 100) int topIndex;   // points to top element public: Stack() {

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [usingLL.cpp](./usingLL.cpp)
**Description**: Contains implementation code for `usingLL`.

**Key Functions & Signatures**:
- ` void push(T val) `
- ` void pop() `
- ` bool isEmpty() `
- ` //     void push(int val) `
- ` //     void pop() `
- ` //     int top() `
- ` //     bool isEmpty() `

**Algorithm / Logic Walkthrough**:
class Node { public: int data; Node* next; Node(int val) { data = val;

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Standard Stack Operations**: All run in $O(1)$ time.
- **Next Greater Element**: Solve using a monotonic stack in $O(N)$ time. Maintain stack of indices or values in decreasing order.
- **Max Area in Histogram**: Find next smaller left and next smaller right for each bar. The width is `nsr[i] - nsl[i] - 1`. Solve in $O(N)$ time using a stack.