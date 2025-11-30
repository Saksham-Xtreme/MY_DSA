/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program validates if a given binary tree is a valid Binary Search Tree (BST).
 * A valid BST must satisfy the following conditions for every node:
 * 1. All values in its left subtree must be less than the node's value.
 * 2. All values in its right subtree must be greater than or equal to the node's value.
 *
 * This validation is not as simple as a local check (e.g., checking if the left child is smaller),
 * because it must hold true for the entire subtree. For example, a node's value must be
 * greater than *all* nodes in its left subtree, not just its immediate left child.
 *
 * The program includes the following components:
 *
 * 1.  Node Class: Defines the structure for a binary tree node.
 *
 * 2.  insert & buildBST Functions: Standard helpers to build a tree from an array.
 *
 * 3.  validateBST Function: The main entry point for the validation logic. It
 * starts the recursive validation process by calling `validateHelp` with the root
 * and an initial range of `NULL` for `min` and `max` nodes.
 *
 * 4.  validateHelp Function: A recursive helper that performs the actual validation.
 * - **Time Complexity (TC): O(n)** as it must visit every node once to check its validity.
 * - **Space Complexity (SC): O(h)**, where 'h' is the tree height, due to the
 * recursion stack.
 *
 * - **Logic:**
 * - The function maintains a `min` and `max` range for the values of all nodes
 * in the current subtree.
 * - For a given `root` node:
 * - The value `root->data` is checked against the `min` and `max` values inherited
 * from its ancestors. If it's outside this range, the tree is invalid.
 * - The recursive call for the **left** subtree updates the **max** bound to be the
 * current `root->data`, ensuring all nodes in the left subtree are less than it.
 * - The recursive call for the **right** subtree updates the **min** bound to be the
 * current `root->data`, ensuring all nodes in the right subtree are greater than it.
 *
 * 5.  main Function: Initializes a sample tree (which is a valid BST in this case),
 * and prints `1` (true) or `0` (false) based on the validation result.
 *
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
         this->data=data;
         left=right=NULL;
     }
 };
  
 Node* insert(Node* root, int val){
     if(root==NULL){
         root=new Node(val);
         return root;
     }
      
     if(val < root->data){
         root->left=insert(root->left, val);
     } 
     else{
         root->right=insert(root->right, val);
     }
      
     return root;
 }
  
 void inorder(Node* root){
     if(root==NULL){
         return;
     }
      
     inorder(root->left);
     cout<< root->data<<" ";
     inorder(root->right);
 }
  
 // Corrected validateHelp function
 bool validateHelp(Node* root, Node* min, Node* max){
     // Base case: An empty tree is a valid BST.
     if(root==NULL){
         return true;
     }
 
     // Check if current node's data violates the min/max constraints.
     // The previous code had a logical error here.
     if(min != NULL && root->data <= min->data){
         return false;
     }
 
     if(max != NULL && root->data >= max->data){
         return false;
     }
 
     // Recursively validate left and right subtrees.
     // For the left subtree, the new max bound is the current root.
     // For the right subtree, the new min bound is the current root.
     return validateHelp(root->left, min, root) && validateHelp(root->right, root, max);
 }
 
 bool validateBST(Node* root){
     // Start the validation process with an open range (NULL for min and max).
     return validateHelp(root, NULL, NULL);
 }
 
 Node* buildBST(int arr[],int n){
     Node* root=NULL;
     for(int i=0;i<n;i++){
         root=insert(root, arr[i]);
     }
     return root;
 }
 
 int main(){
     int arr[6]={5,1,3,4,2,7};
     Node* root=buildBST(arr, 6);
      
     cout << validateBST(root) << endl;
     
     return 0;
 }