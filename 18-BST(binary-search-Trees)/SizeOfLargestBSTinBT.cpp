/*
 * =========================================================================
 * NOTES ON LARGEST BST IN A BINARY TREE
 * =========================================================================
 * This program finds the **largest Binary Search Tree (BST) subtree** within a
 * general binary tree. The "largest" is determined by the number of nodes in
 * the BST subtree. This problem is more complex than a simple BST validation
 * because it requires checking every subtree, not just the entire tree from
 * the root.
 *
 * The approach uses a **post-order traversal** (Left, Right, Root) with a
 * custom `Info` class to pass back crucial information from the children to their
 * parent.
 *
 * ### Key Components
 *
 * 1.  `Info` Class: This class is a custom structure used to return multiple
 * values from the recursive calls. For each node, it stores:
 * - `isBST`: A boolean indicating if the subtree rooted at this node is a valid BST.
 * - `min`: The minimum value in this subtree.
 * - `max`: The maximum value in this subtree.
 * - `sz`: The size (number of nodes) of this subtree.
 *
 * 2.  `largestBST` Function: This is the core recursive function.
 * - **Time Complexity (TC): O(n)**, as every node is visited exactly once.
 * - **Space Complexity (SC): O(h)**, where 'h' is the height of the tree,
 * due to the recursion stack.
 *
 * - **Logic**:
 * - **Base Case**: If a node is `NULL`, it's considered a valid BST of size 0,
 * with a `min` of `INT_MAX` and a `max` of `INT_MIN` to not affect
 * parent checks.
 * - **Recursive Calls**: It recursively calls itself on the left and
 * right children to get their `Info` objects.
 * - **Validity Check**: It combines the information from the children
 * to determine if the current subtree is a valid BST. A subtree is a BST if:
 * - Its left and right children's subtrees are themselves valid BSTs.
 * - The current node's data is greater than the maximum value in its
 * left subtree.
 * - The current node's data is less than the minimum value in its
 * right subtree.
 * - **Size Update**: If the current subtree is a valid BST, its size
 * is updated, and the global `maxSize` is updated accordingly.
 * - **Return Value**: It returns a new `Info` object with the combined results,
 * propagating the information up the tree.
 *
 * 3.  `main` Function: Initializes a sample binary tree and then calls `largestBST`
 * to find the largest BST subtree. The final size is printed from the global
 * `maxSize` variable.
 */

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
#include<algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

class Info{
public:
    bool isBST;
    int min;
    int max;
    int sz;

    Info(bool isBST, int min, int max, int sz){
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->sz = sz;
    }
};

// Global variable to keep track of the maximum size found.
static int maxSize = 0;

Info* largestBST(Node* root){
    
    if(root == NULL){
        // A null tree is a valid BST of size 0.
        return new Info(true, INT_MAX, INT_MIN, 0);
    }

    // Recursively get information from the left and right subtrees.
    Info* leftInfo = largestBST(root->left);
    // Corrected the recursive call to the right subtree.
    Info* rightInfo = largestBST(root->right);

    // Calculate properties for the current node's subtree.
    int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
    int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
    int currSz = leftInfo->sz + rightInfo->sz + 1;

    // Check if the current subtree is a valid BST.
    // The previous code had a typo here, using leftInfo->isBST and rightInfo->isBST.
    if(leftInfo->isBST && rightInfo->isBST
        && root->data > leftInfo->max
        && root->data < rightInfo->min){
            // If it's a valid BST, update the global maximum size.
            maxSize = max(maxSize, currSz);
            return new Info(true, currMin, currMax, currSz);
    }

    // If the subtree is not a valid BST, mark it as such and return its properties.
    return new Info(false, currMin, currMax, currSz);
}

int main(){
    // The provided main function code had errors. It did not define Node.
    // I have added a basic Node class for it to compile.
    Node* root= new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    
    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    // This part of the tree is not a valid BST, but its subtrees can be.
    // The largest BST subtree here is rooted at node 60 (with children 45 and 70).
    // The size of this subtree is 5

    largestBST(root);
    cout << "max size -> " << maxSize << endl;
    
    return 0;
}

