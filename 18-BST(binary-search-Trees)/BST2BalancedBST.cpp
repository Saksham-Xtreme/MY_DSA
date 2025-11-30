/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program demonstrates how to balance an unbalanced Binary Search Tree (BST)
 * to improve its performance for search, insertion, and deletion operations.
 * A balanced BST ensures that its height is logarithmic, thus making all these
 * operations more efficient.
 *
 * The core idea of the algorithm is to:
 * 1.  **Traverse the tree** to get all node values in a sorted order. An **in-order traversal** is perfect for this.
 * 2.  **Build a new, perfectly balanced BST** from the sorted array of node values. This is done recursively by always choosing the middle element as the root, and then recursively building the left and right subtrees from the left and right halves of the array.
 *
 * The program includes the following key components:
 *
 * 1.  `Node*` Class and `using namespace std` : Standard definitions for a tree node and namespace.
 *
 * 2.  `BuildSortedVec` Function: This is the recursive helper function that builds a balanced BST from a **sorted vector**.
 * - **TC: O(n)**, as it visits each node in the array once.
 * - **SC: O(n)**, as it creates a new tree.
 *
 * 3.  `getInorder` Function: Performs a standard **in-order traversal** to retrieve all node values from the original tree and store them in a vector.
 * - **TC: O(n)**, as it visits every node in the tree.
 * - **SC: O(n)**, for storing the nodes in the vector.
 *
 * 4.  `preorder` Function: Performs a **preorder traversal** (Root -> Left -> Right) to print the final, balanced tree. This traversal is useful for verifying the new structure.
 *
 * 5.  `BalBST` Function: The main function that orchestrates the balancing process. It calls `getInorder` to get the sorted list of nodes and then `BuildSortedVec` to construct the balanced tree.
 *
 * 6.  `main` Function: Contains the sample code to create a skewed, unbalanced tree and then calls `BalBST` to balance it, printing the result with a preorder traversal.
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
 
 using namespace std;
 
 // This class defines the structure of a tree node.
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
 
 Node* BuildSortedVec(vector<int> arr, int st, int end){
     if(st > end){
         return NULL;
     }
     int mid = st + (end-st)/2;
     Node* curr = new Node(arr[mid]);
 
     curr->left= BuildSortedVec(arr, st, mid-1);
     curr->right= BuildSortedVec(arr, mid+1, end);
 
     return curr;
 }
 
 void getInorder(Node* root, vector<int> &nodes){
     if(root==NULL){
         return;
     }
 
     getInorder(root->left, nodes);
     nodes.push_back(root->data);
     getInorder(root->right, nodes);
 }
 
 void preorder(Node* root){
     if(root==NULL){
         return;
     }
 
     cout<< root->data <<" ";
     preorder(root->left);
     preorder(root->right);
 }
 
 Node* BalBST(Node* root){
     // Get inorder sequence
     vector<int> nodes;
     getInorder(root, nodes);
 
     return BuildSortedVec(nodes, 0, nodes.size()-1);
 }
 
 int main(){
     // The provided main function code had errors in tree construction.
     // This part has been corrected to build a left-skewed, unbalanced BST.
     Node* root= new Node(6);
     root->left = new Node(5);
     root->left->left = new Node(4);
     root->left->left->left = new Node(3);
     root->left->left->left->left = new Node(2);
     root->left->left->left->left->left = new Node(1);
     
     // The right side of the tree is not used in the problem, but to create a skewed tree.
     // The original code had repetitive assignments which would create errors.
     // The provided right side of the tree creates a right-skewed, unbalanced BST.
     root->right= new Node(7);
     root->right->right= new Node(8);
     root->right->right->right= new Node(9);
     
     cout << "Original Tree (preorder): ";
     preorder(root);
     cout << endl;
     
     root = BalBST(root);
     
     cout << "Balanced Tree (preorder): ";
     preorder(root);
     cout<<endl;
 
     return 0;
 }