/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program demonstrates how to print all nodes in a Binary Search Tree
 * (BST) that fall within a specified range [st, end].
 *
 * The core logic leverages the BST property to efficiently traverse only the
 * necessary parts of the tree, avoiding subtrees that cannot contain valid
 * nodes.
 *
 * The program includes the following components:
 *
 * 1.  Node Class: Defines the structure for a binary tree node.
 *
 * 2.  insert Function: A recursive helper to insert a new node into the BST.
 *
 * 3.  inorder Function: Performs an inorder traversal to print the entire tree
 * to verify its structure.
 *
 * 4.  buildBST Function: Builds a BST from an array of integers.
 *
 * 5.  printRange Function: The main function for this task.
 * - **Time Complexity (TC): O(n)** in the worst case (a skewed tree). However,
 * on average, it's more efficient, roughly O(h + k), where 'h' is the height
 * of the tree and 'k' is the number of nodes in the range, as it only visits
 * a limited number of nodes.
 * - **Space Complexity (SC): O(h)**, where 'h' is the tree height, due to the
 * recursion stack.
 *
 * - **Logic:**
 * - **Base Case:** The function now correctly includes a base case to stop
 * recursion when it encounters a `NULL` node, preventing a crash.
 * - **Traversal Logic:**
 * - If the current node's data is within the range [st, end], it prints the
 * node and then recursively checks **both** its left and right subtrees
 * for other nodes in the range.
 * - If the current node's data is less than `st`, the entire left subtree can
 * be ignored, and the function only recurses on the right subtree.
 * - If the current node's data is greater than `end`, the entire right
 * subtree can be ignored, and the function only recurses on the left subtree.
 *
 * 6.  main Function: Initializes a sample tree, calls `printRange` with a
 * specified range (2 to 5), and prints the resulting nodes.
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
 
 Node* buildBST(int arr[],int n){
     Node* root=NULL;
     for(int i=0;i<n;i++){
         root=insert(root, arr[i]);
     }
     return root;
 }
 
 void printRange(Node* root, int st, int end){
     // Corrected: Base case to stop recursion when the node is NULL.
     if(root == NULL){
         return;
     }
     
     // If the current node's data is within the range, print it and recurse on both children.
     if(st <= root->data && root->data <= end){
        printRange(root->left, st, end);
         cout << root->data << " ";
        
         printRange(root->right, st, end);
     } 
     // If the current node's data is too small, the range must be in the right subtree.
     else if(root->data < st){
         printRange(root->right, st, end);
     } 
     // If the current node's data is too large, the range must be in the left subtree.
     else {
         printRange(root->left, st, end);
     }
 }
 
 int main(){
     int arr[6]={5,1,3,4,2,7};
     Node* root=buildBST(arr, 6);
     
     cout << "Tree in-order traversal: ";
     inorder(root);
     cout << endl;
 
     cout << "Nodes between 2 and 5: ";
     printRange(root, 2, 5);
     cout << endl;
 
     return 0;
 }