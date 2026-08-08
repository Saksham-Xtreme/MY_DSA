# Binary Search Trees (BST)

## Topic Overview
A Binary Search Tree is a binary tree with the ordering property: for any node, the values of all nodes in its left subtree are less than the node's value, and the values of all nodes in its right subtree are greater than the node's value. This folder covers BST operations (insert, search, delete), range queries, root-to-leaf paths, BST validation, mirroring BST, building balanced BST from sorted arrays, and finding the size of the largest BST inside a binary tree.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [BST2BalancedBST.cpp](./BST2BalancedBST.cpp) | Contains implementation code for `BST2BalancedBST`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [BstSearch.cpp](./BstSearch.cpp) | Contains implementation code for `BstSearch`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [BuildaBST.cpp](./BuildaBST.cpp) | Contains implementation code for `BuildaBST`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [DeleteANode.cpp](./DeleteANode.cpp) | Contains implementation code for `DeleteANode`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [Intro.cpp](./Intro.cpp) | Contains implementation code for `Intro`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [Merge2BST.cpp](./Merge2BST.cpp) | Contains implementation code for `Merge2BST`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PrintInRange.cpp](./PrintInRange.cpp) | Contains implementation code for `PrintInRange`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [RootToLeaf.cpp](./RootToLeaf.cpp) | Contains implementation code for `RootToLeaf`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [SizeOfLargestBSTinBT.cpp](./SizeOfLargestBSTinBT.cpp) | Contains implementation code for `SizeOfLargestBSTinBT`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [SortedArrayToBalancedBST.cpp](./SortedArrayToBalancedBST.cpp) | Contains implementation code for `SortedArrayToBalancedBST`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [ValidateBST.cpp](./ValidateBST.cpp) | Contains implementation code for `ValidateBST`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [BST2BalancedBST.cpp](./BST2BalancedBST.cpp)
**Description**: Contains implementation code for `BST2BalancedBST`.

**Key Functions & Signatures**:
- ` Node* BuildSortedVec(vector<int> arr, int st, int end) `
- ` void getInorder(Node* root, vector<int> &nodes) `
- ` void preorder(Node* root) `
- ` Node* BalBST(Node* root) `

**Algorithm / Logic Walkthrough**:
This class defines the structure of a tree node. Get inorder sequence The provided main function code had errors in tree construction. This part has been corrected to build a left-skewed, unbalanced BST. The right side of the tree is not used in the problem, but to create a skewed tree. The original code had repetitive assignments which would create errors.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [BstSearch.cpp](./BstSearch.cpp)
**Description**: Contains implementation code for `BstSearch`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` bool search(Node* root, int key){ //O(h) `
- ` void inorder(Node* root) `
- ` Node* buildBST(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
Function to insert a new node with value `val` into the BST. Base case: If the current node is NULL, create a new node and return it. If the value to be inserted is less than the current node's data, go to the left subtree. Otherwise, go to the right subtree. Return the root of the (un)modified subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [BuildaBST.cpp](./BuildaBST.cpp)
**Description**: Contains implementation code for `BuildaBST`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` void inorder(Node* root) `
- ` Node* buildBST(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
Function to insert a new node with value `val` into the BST. Base case: If the current node is NULL, create a new node and return it. If the value to be inserted is less than the current node's data, go to the left subtree. Otherwise, go to the right subtree. Return the root of the (un)modified subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DeleteANode.cpp](./DeleteANode.cpp)
**Description**: Contains implementation code for `DeleteANode`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` void inorder(Node* root) `
- ` Node* buildBST(int arr[],int n) `
- ` Node* getInorderSucc(Node* root) `
- ` Node* delNode(Node* root, int n) `

**Algorithm / Logic Walkthrough**:
Node to be deleted is found. Case 1: Node is a leaf (0 children). Case 2: Node has 1 child. Case 3: Node has 2 children. The root of the tree can change, so we must reassign it. =========================================================================

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Intro.cpp](./Intro.cpp)
**Description**: Contains implementation code for `Intro`.

**Algorithm / Logic Walkthrough**:
========================================================================= NOTES ON BINARY SEARCH TREES (BSTs) ========================================================================= A Binary Search Tree is a hierarchical data structure where each node can have at most two children. The defining property of a BST is that it maintains an order among its elements.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Merge2BST.cpp](./Merge2BST.cpp)
**Description**: Contains implementation code for `Merge2BST`.

**Key Functions & Signatures**:
- ` void getInorder(Node* root, vector<int> &nodes) `
- ` Node* BuildSortedVec(vector<int> arr, int st, int end) `
- ` void preorder(Node* root) `
- ` Node* mergeBST(Node* root1, Node* root2) `

**Algorithm / Logic Walkthrough**:
========================================================================= NOTES ON MERGING TWO BSTs ========================================================================= This program demonstrates how to merge two separate Binary Search Trees (BSTs) into a single, perfectly balanced BST. The approach uses a three-step process that is both straightforward and efficient.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PrintInRange.cpp](./PrintInRange.cpp)
**Description**: Contains implementation code for `PrintInRange`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` void inorder(Node* root) `
- ` Node* buildBST(int arr[],int n) `
- ` void printRange(Node* root, int st, int end) `

**Algorithm / Logic Walkthrough**:
Corrected: Base case to stop recursion when the node is NULL. If the current node's data is within the range, print it and recurse on both children. If the current node's data is too small, the range must be in the right subtree. If the current node's data is too large, the range must be in the left subtree. ========================================================================= PROGRAM NOTES

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [RootToLeaf.cpp](./RootToLeaf.cpp)
**Description**: Contains implementation code for `RootToLeaf`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` void inorder(Node* root) `
- ` void printPath(vector<int> path) `
- ` void pathHelper(Node* root, vector<int> &path) `
- ` void rootLeaf(Node* root) `
- ` Node* buildBST(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
========================================================================= NOTES ON BST ROOT-TO-LEAF PATHS ========================================================================= This program demonstrates how to print all possible paths from the root of a Binary Search Tree (BST) to its leaf nodes. The core logic uses a recursive approach with backtracking to keep track of the current path.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SizeOfLargestBSTinBT.cpp](./SizeOfLargestBSTinBT.cpp)
**Description**: Contains implementation code for `SizeOfLargestBSTinBT`.

**Algorithm / Logic Walkthrough**:
Global variable to keep track of the maximum size found. A null tree is a valid BST of size 0. Recursively get information from the left and right subtrees. Corrected the recursive call to the right subtree. Calculate properties for the current node's subtree. Check if the current subtree is a valid BST.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SortedArrayToBalancedBST.cpp](./SortedArrayToBalancedBST.cpp)
**Description**: Contains implementation code for `SortedArrayToBalancedBST`.

**Key Functions & Signatures**:
- ` Node* BuildFromSorted(int arr[], int st, int end) `
- ` void preorder(Node* root) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [ValidateBST.cpp](./ValidateBST.cpp)
**Description**: Contains implementation code for `ValidateBST`.

**Key Functions & Signatures**:
- ` Node* insert(Node* root, int val) `
- ` void inorder(Node* root) `
- ` bool validateHelp(Node* root, Node* min, Node* max) `
- ` bool validateBST(Node* root) `
- ` Node* buildBST(int arr[],int n) `

**Algorithm / Logic Walkthrough**:
Corrected validateHelp function Base case: An empty tree is a valid BST. Check if current node's data violates the min/max constraints. The previous code had a logical error here. Recursively validate left and right subtrees. For the left subtree, the new max bound is the current root.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Inorder Traversal of BST**: Always produces elements in sorted ascending order.
- **Search / Insert Complexity**: $O(H)$ where $H$ is the height. In balanced BST, $H = O(\log N)$; in skewed BST, $H = O(N)$.
- **BST Deletion**: Handle three cases: leaf node, node with one child, node with two children (replace with inorder successor, then delete successor).