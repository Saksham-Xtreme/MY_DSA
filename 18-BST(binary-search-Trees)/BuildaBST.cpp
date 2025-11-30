/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program demonstrates the basics of building and traversing a Binary
 * Search Tree (BST) in C++. The key function here is `insert`, which
 * maintains the BST's ordering property.
 *
 * 1.  Node Class: Defines the structure for a binary tree node, holding an
 * integer value (`data`) and pointers to its left and right children.
 *
 * 2.  insert Function: This is a recursive function to insert a new node
 * into the BST.
 * - **TC:** O(h), where 'h' is the height of the tree. This is because the
 * insertion process follows a single path from the root to the insertion point.
 * In a balanced tree, this is O(log n); in a skewed tree, it's O(n).
 * - **SC:** O(h) due to the recursion stack.
 *
 * 3.  inorder Function: Performs an in-order traversal (Left -> Root -> Right)
 * of the BST. This traversal is a key property of BSTs, as it always prints
 * the nodes in **sorted order**.
 *
 * 4.  buildBST Function: A helper function that takes an array of integers
 * and builds a BST by repeatedly calling the `insert` function for each
 * element.
 *
 * 5.  main Function: Initializes an array of numbers, builds a BST from it,
 * and then calls the `inorder` traversal to print the sorted sequence of
 * elements, demonstrating that the tree was constructed correctly.
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
 
 // Function to insert a new node with value `val` into the BST.
 Node* insert(Node* root, int val){
     // Base case: If the current node is NULL, create a new node and return it.
     if(root==NULL){
         root=new Node(val);
         return root;
     }
     
     // If the value to be inserted is less than the current node's data,
     // go to the left subtree.
     if(val < root->data){
         root->left=insert(root->left, val);
     } 
     // Otherwise, go to the right subtree.
     else{
         root->right=insert(root->right, val);
     }
     
     // Return the root of the (un)modified subtree.
     return root;
 }
 
 // Function to perform an in-order traversal of the BST.
 void inorder(Node* root){
     // Base case: Stop if the node is NULL.
     if(root==NULL){
         return;
     }
     
     // Traverse the left subtree.
     inorder(root->left);
     // Print the current node's data.
     cout<< root->data<<" ";
     // Traverse the right subtree.
     inorder(root->right);
 }
 
 // Function to build a complete BST from an array.
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
     inorder(root);
     cout<<endl;
     return 0;
 }