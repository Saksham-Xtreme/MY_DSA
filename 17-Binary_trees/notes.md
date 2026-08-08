# Binary Trees

## Topic Overview
A Binary Tree is a non-linear hierarchical data structure where each node has at most two children, referred to as the left child and the right child. This section covers binary tree representation, tree traversals (Preorder, Inorder, Postorder, and Level Order), tree properties (height, diameter, node count, sum of nodes), subtree detection, top/bottom view, Lowest Common Ancestor (LCA), minimum distance between nodes, and transforming a tree into a Sum Tree.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [BuildTreeFromPreorder.cpp](./BuildTreeFromPreorder.cpp) | Contains implementation code for `BuildTreeFromPreorder`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [DaimeterOfTree.cpp](./DaimeterOfTree.cpp) | Contains implementation code for `DaimeterOfTree`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [DaimeterOfTreeAP1.cpp](./DaimeterOfTreeAP1.cpp) | Contains implementation code for `DaimeterOfTreeAP1`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [DaimeterOfaTreeAp2.cpp](./DaimeterOfaTreeAp2.cpp) | Contains implementation code for `DaimeterOfaTreeAp2`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [HeightAndCountOfaTree.cpp](./HeightAndCountOfaTree.cpp) | Contains implementation code for `HeightAndCountOfaTree`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [HeightOfaTree.cpp](./HeightOfaTree.cpp) | Contains implementation code for `HeightOfaTree`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [InorderTraversal.cpp](./InorderTraversal.cpp) | Contains implementation code for `InorderTraversal`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [KthAncestorOfaNode.cpp](./KthAncestorOfaNode.cpp) | Contains implementation code for `KthAncestorOfaNode`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [KthLevelofaTree.cpp](./KthLevelofaTree.cpp) | Contains implementation code for `KthLevelofaTree`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [LCAapproach2.cpp](./LCAapproach2.cpp) | Contains implementation code for `LCAapproach2`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [LowestCommonAncestor.cpp](./LowestCommonAncestor.cpp) | Contains implementation code for `LowestCommonAncestor`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [MinDistancebetweenNodes.cpp](./MinDistancebetweenNodes.cpp) | Contains implementation code for `MinDistancebetweenNodes`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [PostOrderTraversal.cpp](./PostOrderTraversal.cpp) | Contains implementation code for `PostOrderTraversal`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [PreOrderTreeTravesal.cpp](./PreOrderTreeTravesal.cpp) | Contains implementation code for `PreOrderTreeTravesal`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [SubtreeOfAnotherTree.cpp](./SubtreeOfAnotherTree.cpp) | Contains implementation code for `SubtreeOfAnotherTree`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [SumOfNodes.cpp](./SumOfNodes.cpp) | Contains implementation code for `SumOfNodes`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [Top View of a Tree ( Approach ).cpp](./Top View of a Tree ( Approach ).cpp) | Contains implementation code for `Top View of a Tree ( Approach )`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [TopViewofaTreeApproach.cpp](./TopViewofaTreeApproach.cpp) | Contains implementation code for `TopViewofaTreeApproach`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [TransformtoSumTree.cpp](./TransformtoSumTree.cpp) | Contains implementation code for `TransformtoSumTree`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [first.cpp](./first.cpp) | Contains implementation code for `first`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [levelOrderTraversal.cpp](./levelOrderTraversal.cpp) | Contains implementation code for `levelOrderTraversal`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [mapInSTL.cpp](./mapInSTL.cpp) | Contains implementation code for `mapInSTL`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [BuildTreeFromPreorder.cpp](./BuildTreeFromPreorder.cpp)
**Description**: Contains implementation code for `BuildTreeFromPreorder`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DaimeterOfTree.cpp](./DaimeterOfTree.cpp)
**Description**: Contains implementation code for `DaimeterOfTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int height(Node* root) `
- ` int daim1(Node* root) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DaimeterOfTreeAP1.cpp](./DaimeterOfTreeAP1.cpp)
**Description**: Contains implementation code for `DaimeterOfTreeAP1`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int height(Node* root) `
- ` int daim1(Node* root) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DaimeterOfaTreeAp2.cpp](./DaimeterOfaTreeAp2.cpp)
**Description**: Contains implementation code for `DaimeterOfaTreeAp2`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int height(Node* root) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HeightAndCountOfaTree.cpp](./HeightAndCountOfaTree.cpp)
**Description**: Contains implementation code for `HeightAndCountOfaTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int height(Node* root) `
- ` int count(Node* root) `

**Algorithm / Logic Walkthrough**:
We're using the std namespace to avoid writing 'std::' everywhere. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. This allows the buildTree function to maintain its state across recursive calls. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HeightOfaTree.cpp](./HeightOfaTree.cpp)
**Description**: Contains implementation code for `HeightOfaTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int height(Node* root) `
- ` int count(Node* root) `

**Algorithm / Logic Walkthrough**:
We're using the std namespace to avoid writing 'std::' everywhere. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. This allows the buildTree function to maintain its state across recursive calls. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [InorderTraversal.cpp](./InorderTraversal.cpp)
**Description**: Contains implementation code for `InorderTraversal`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void inorder(Node* root) `

**Algorithm / Logic Walkthrough**:
This class represents a single node in a binary tree. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. This allows the buildTree function to maintain its state across recursive calls. A recursive function to build a binary tree from a preorder traversal in a vector. The vector uses -1 to represent a null node.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [KthAncestorOfaNode.cpp](./KthAncestorOfaNode.cpp)
**Description**: Contains implementation code for `KthAncestorOfaNode`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int KthAncestor(Node* root, int node, int k) `

**Algorithm / Logic Walkthrough**:
The vector of nodes representing a preorder traversal of the tree. Build the binary tree from the vector and get the root. ========================================================================= PROGRAM NOTES ========================================================================= This program is designed to find the Kth ancestor of a given node in a

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [KthLevelofaTree.cpp](./KthLevelofaTree.cpp)
**Description**: Contains implementation code for `KthLevelofaTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void KthHelper(Node* root, int K,int currLevel) `
- ` void KthLevel(Node* root, int K) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LCAapproach2.cpp](./LCAapproach2.cpp)
**Description**: Contains implementation code for `LCAapproach2`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` Node* LCA2(Node* root,int n1,int n2){ // O(n) `

**Algorithm / Logic Walkthrough**:
The vector of nodes representing a preorder traversal of the tree. Build the binary tree from the vector and get the root. The two nodes for which to find the LCA. Call the LCA function and print the result. ========================================================================= PROGRAM NOTES

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [LowestCommonAncestor.cpp](./LowestCommonAncestor.cpp)
**Description**: Contains implementation code for `LowestCommonAncestor`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` bool FindPath(Node* root,int n, vector<int> &path) `
- ` int LCA(Node* root, int n1, int n2) `

**Algorithm / Logic Walkthrough**:
The vector of nodes representing a preorder traversal of the tree. Build the binary tree from the vector and get the root. The two nodes for which to find the LCA. Call the LCA function and print the result. ========================================================================= PROGRAM NOTES

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MinDistancebetweenNodes.cpp](./MinDistancebetweenNodes.cpp)
**Description**: Contains implementation code for `MinDistancebetweenNodes`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` Node* LCA2(Node* root,int n1,int n2){ // O(n) `
- ` int dist(Node* root, int n) `
- ` int minDist(Node* root, int n1, int n2) `

**Algorithm / Logic Walkthrough**:
Corrected the recursive call to search the right subtree. Function to find the distance from a starting node to a target node. Corrected the return type from `void` to `int`. First, find the LCA of the two nodes. Calculate the distance from the LCA to each of the target nodes. The total distance is the sum of these two distances.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PostOrderTraversal.cpp](./PostOrderTraversal.cpp)
**Description**: Contains implementation code for `PostOrderTraversal`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void postOrder(Node* root) `

**Algorithm / Logic Walkthrough**:
This class represents a single node in a binary tree. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. This allows the buildTree function to maintain its state across recursive calls. A recursive function to build a binary tree from a preorder traversal in a vector. The vector uses -1 to represent a null node.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PreOrderTreeTravesal.cpp](./PreOrderTreeTravesal.cpp)
**Description**: Contains implementation code for `PreOrderTreeTravesal`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void preorder(Node* root) `

**Algorithm / Logic Walkthrough**:
This class represents a single node in a binary tree. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. Using a static variable allows its state to be maintained across recursive calls. A recursive function to build a binary tree from a vector of node data. The vector represents a preorder traversal, with -1 indicating a NULL node.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SubtreeOfAnotherTree.cpp](./SubtreeOfAnotherTree.cpp)
**Description**: Contains implementation code for `SubtreeOfAnotherTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` bool isIdentical(Node* root1, Node* root2) `
- ` bool isSubtree(Node* root, Node* subRoot) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [SumOfNodes.cpp](./SumOfNodes.cpp)
**Description**: Contains implementation code for `SumOfNodes`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int sum(Node* root) `

**Algorithm / Logic Walkthrough**:
We're using the std namespace to avoid writing 'std::' everywhere. Constructor to initialize a new node with a given data value. A static index to keep track of the current position in the nodes vector. This allows the buildTree function to maintain its state across recursive calls. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Top View of a Tree ( Approach ).cpp](./Top View of a Tree ( Approach ).cpp)
**Description**: Contains implementation code for `Top View of a Tree ( Approach )`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void topView(Node* root) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [TopViewofaTreeApproach.cpp](./TopViewofaTreeApproach.cpp)
**Description**: Contains implementation code for `TopViewofaTreeApproach`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void topView(Node* root) `

**Algorithm / Logic Walkthrough**:
Constructor to initialize a new node with a given data value. Base case: If the current element is -1, it's a null node, so return NULL. Create a new node with the data from the current vector element. Recursively build the left subtree. Recursively build the right subtree. Return the newly created node as the root of its subtree.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [TransformtoSumTree.cpp](./TransformtoSumTree.cpp)
**Description**: Contains implementation code for `TransformtoSumTree`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` int transform(Node* root) `
- ` void levelOrder(Node* root) `

**Algorithm / Logic Walkthrough**:
Corrected logic for tree transformation using post-order traversal. Base Case: If the node is NULL, return 0. Leaf node case: If a node is a leaf, return its data and don't change it yet. Store the current node's original data. Recursively call on left and right subtrees to get the sum of their original values. Update the current node's data with the sum of its subtrees' original values.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [first.cpp](./first.cpp)
**Description**: Contains implementation code for `first`.

**Algorithm / Logic Walkthrough**:
Binary Tree: An Introduction 🌳 A binary tree is a hierarchical data structure where each node has, at most, two children, typically referred to as the left child and the right child. It's used to organize data in a way that makes searching, insertion, and deletion efficient. Binary Tree Terminology Leaf Node: A leaf node is a node that has no children. It's located at the "end" of a branch and represents a terminal point in the tree structure. A tree can have one or more leaf nodes.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [levelOrderTraversal.cpp](./levelOrderTraversal.cpp)
**Description**: Contains implementation code for `levelOrderTraversal`.

**Key Functions & Signatures**:
- ` Node* buildTree(vector<int> nodes) `
- ` void levelOrder(Node* root) `

**Algorithm / Logic Walkthrough**:
We're using the std namespace to avoid writing 'std::' everywhere. The data stored in the node. A pointer to the left child node. A pointer to the right child node. Constructor to initialize a new node with a given data value. Increment the index to process the next node.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [mapInSTL.cpp](./mapInSTL.cpp)
**Description**: Contains implementation code for `mapInSTL`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Traversals**:
  - Preorder: Root $\rightarrow$ Left $\rightarrow$ Right
  - Inorder: Left $\rightarrow$ Root $\rightarrow$ Right
  - Postorder: Left $\rightarrow$ Right $\rightarrow$ Root
  - Level Order: Uses a Queue to traverse level-by-level (BFS).
- **Diameter of Tree**: Longest path between any two nodes. Calculated recursively as `max(left_height + right_height, max(left_diameter, right_diameter))`.