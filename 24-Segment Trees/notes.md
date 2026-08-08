# Segment Trees

## Topic Overview
A Segment Tree is a binary tree used for storing intervals or segments, allowing fast query ($O(\log N)$) and update ($O(\log N)$) operations on range queries over an array. Common operations include finding range sum, range minimum/maximum, and performing point updates.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [first.cpp](./first.cpp) | Contains implementation code for `first`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [first.cpp](./first.cpp)
**Description**: Contains implementation code for `first`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Segment Tree Construction**: Constructed in $O(N)$ time. Size of the segment tree array is typically $4N$ for an array of size $N$.
- **Query & Update**: Both traverse the tree height, yielding $O(\log N)$ time.