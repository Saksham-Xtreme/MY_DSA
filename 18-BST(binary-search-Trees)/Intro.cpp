// =========================================================================
// NOTES ON BINARY SEARCH TREES (BSTs)
// =========================================================================
// A Binary Search Tree is a hierarchical data structure where each node
// can have at most two children. The defining property of a BST is that
// it maintains an order among its elements.
//
// Key Properties of a BST:
//
// 1.  Left Subtree Rule: For any given node, all values in its **left subtree**
//     are **less than** the node's data.
//
// 2.  Right Subtree Rule: For any given node, all values in its **right subtree**
//     are **greater than or equal to** the node's data.
//
// These two rules are recursive, applying to every node in the tree.
//
// Why is this useful?
//
// - Efficient Searching: By following the left/right rules, you can quickly
//   narrow down the search space, similar to a binary search on an array.
//   This gives an average-case time complexity of O(log n).
//
// - Sorted Data: One of the most important characteristics of a BST is that
//   an **in-order traversal** of the tree will always visit the nodes in **sorted order**.
//   
//
// This is why in-order traversal of a BST yields a sorted sequence, as you
// mentioned. The BST structure itself guarantees that property.
//
// =========================================================================

