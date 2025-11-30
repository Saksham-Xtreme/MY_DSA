/*

 * =========================================================================
 * NOTES ON BST ROOT-TO-LEAF PATHS
 * =========================================================================
 * This program demonstrates how to print all possible paths from the root of
 * a Binary Search Tree (BST) to its leaf nodes. The core logic uses a recursive
 * approach with backtracking to keep track of the current path.
 *
 * The program includes the following key components:
 *
 * 1.  Node Class: Defines the structure of a binary tree node.
 *
 * 2.  `insert` & `buildBST` Functions: Standard helper functions to build the
 * BST from an array.
 *
 * 3.  `printPath` Function: A simple utility to print the elements of a vector,
 * which represents a single path from the root to a leaf.
 *
 * 4.  `pathHelper` Function: This is the core recursive function that performs
 * the traversal and path tracking.
 * - **Time Complexity (TC):** O(n), as it visits every node in the tree once.
 * - **Space Complexity (SC):** O(h), where 'h' is the height of the tree,
 * due to the recursion stack. In a balanced tree, this is O(log n).
 *
 * - **Logic:**
 * - It traverses the tree in a **preorder-like** fashion (Root, Left, Right).
 * - At each node, it adds the node's data to the `path` vector.
 * - When it reaches a **leaf node** (a node with no children), it calls
 * `printPath` to display the current path.
 * - After the recursive calls to the left and right subtrees, it
 * **backtracks** by removing the current node's data from the path. This
 * allows the function to explore other branches without carrying
 * unnecessary data.
 *
 * 5.  `rootLeaf` Function: A wrapper function that initializes an empty `path`
 * vector and starts the process by calling `pathHelper` from the root.
 *
 * 6.  `main` Function: Initializes a sample tree, calls `rootLeaf` to print all
 * the paths, and returns 0.
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
 
 void printPath(vector<int> path){
     for(int i=0;i<path.size();i++){
         cout<<path[i]<<" ";
     }
     cout<<endl;
 }
 
 void pathHelper(Node* root, vector<int> &path){
     if(root==NULL){
         return;
     }
     path.push_back(root->data);
     if(root->left==NULL && root->right == NULL){
         printPath(path);
         path.pop_back(); // Backtrack after printing
         return;
     }
 
     pathHelper(root->left, path);
     pathHelper(root->right, path);
 
     path.pop_back(); // Backtrack for parent's other branches
 }
 
 void rootLeaf(Node* root){
     vector<int> path;
     pathHelper(root, path);
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
     
     rootLeaf(root);
     return 0;
 }