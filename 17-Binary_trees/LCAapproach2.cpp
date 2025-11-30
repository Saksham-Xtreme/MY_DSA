/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program finds the Lowest Common Ancestor (LCA) of two nodes in a
 * binary tree using a single-pass, recursive approach. This method is more
 * efficient than path-finding-based solutions.
 *
 * It includes the following components:
 *
 * 1.  Node Class: Defines the structure for a binary tree node, containing
 * data and pointers to its left and right children.
 *
 * 2.  buildTree Function: Constructs a binary tree from a vector representing
 * a preorder traversal. A static index is used to track progress.
 *
 * 3.  LCA2 Function: This is the core algorithm for finding the LCA.
 * It uses a recursive post-order traversal with a time complexity of **O(n)**
 * and a space complexity of **O(h)**, where 'h' is the height of the tree
 * (due to the recursion stack).
 *
 * - **Logic:**
 * - **Base Case:** If the current node is `NULL` or is one of the target nodes,
 * it returns the current node.
 * - **Recursive Calls:** It recursively searches for the target nodes in the
 * left and right subtrees.
 * - **Combination:**
 * - If results are found from both the left and right subtrees, the current
 * node is the LCA.
 * - If only one result is found (from either the left or right subtree),
 * that result is the LCA.
 * - If no results are found, it returns `NULL`.
 *
 * 4.  main Function: Initializes a sample tree and calls `LCA2` to find and print
 * the LCA of two specified nodes.
 */

 #include<iostream>
 #include<vector>
 #include<queue>
 #include<map>
 #include<stack>
 #include<string>
 #include<cmath>
 #include<list>
 
 
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
 
 
 static int idx = -1;
 
 
 Node* buildTree(vector<int> nodes){
     idx++; 
     if(nodes[idx] == -1){
         return NULL;
     }
 
     Node* currNode = new Node(nodes[idx]);
     currNode->left = buildTree(nodes);
     currNode->right = buildTree(nodes);
     
     return currNode;
 }
 
 Node* LCA2(Node* root,int n1,int n2){ // O(n)
 
     if(root==NULL){
         return NULL;
     }
 
     if(root->data==n1 || root->data==n2){
         return root;
 
     }
 
     Node* leftLca=LCA2(root->left, n1, n2);
     Node* rightLca=LCA2(root->right, n1, n2);
 
     if(leftLca!=NULL && rightLca !=NULL){
         return root;
     }
 
     return leftLca == NULL ? rightLca : leftLca;
 
 }
 
 
 int main(){
     // The vector of nodes representing a preorder traversal of the tree.
     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
     
     // Build the binary tree from the vector and get the root.
     Node* root = buildTree(nodes);
     
     // The two nodes for which to find the LCA.
     int n1=4, n2=5;
 
     // Call the LCA function and print the result.
     cout<<"lca 2 = "<< LCA2(root, n1, n2)->data<<endl;
     
     return 0;
 }