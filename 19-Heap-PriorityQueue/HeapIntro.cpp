
// A heap is a specific type of binary tree with two key properties.
// 1. It must be a **complete binary tree (CBT)**.
//    - A CBT is a binary tree where every level is completely filled, except
//      possibly the last one, which is filled from left to right. This structure
//      is what allows for an efficient array-based representation.
// 2. It must satisfy the **heap property**.
//    - This is the rule that dictates the relationship between a parent node and its children.
//    - **Max Heap:** The parent's value is always greater than or equal to its children's values (`parent >= children`). The root holds the maximum value.
//    - **Min Heap:** The parent's value is always less than or equal to its children's values (`parent <= children`). The root holds the minimum value.

// We will implement the heap using an array or `std::vector` in C++, not a linked structure with pointers.
// This is possible because of the CBT property, which allows us to calculate parent and child indices directly.

// For a node at index `i` in the vector:
// - Its **left child** is at index `2*i + 1`.
// - Its **right child** is at index `2*i + 2`.
// - Its **parent** is at index `(i - 1) / 2`.

// The primary operations on a heap are:
// - **`push()`:** Adds a new element. This involves placing the new element at the end of the vector and then "heapifying up" (swapping with its parent) until the heap property is restored.
//   - Time Complexity: O(logN) because the element moves up the tree's height.
// - **`pop()`:** Removes the root element (the max or min). The root is swapped with the last element, the last element is removed, and then "heapifying down" (swapping with the larger/smaller child) restores the heap property.
//   - Time Complexity: O(logN) because the element moves down the tree's height.
// - **`top()`:** Returns the root element without removing it.
//   - Time Complexity: O(1) as it's a direct access to the first element of the vector.