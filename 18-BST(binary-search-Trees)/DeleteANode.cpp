/*
 * =========================================================================
 * NOTES ON BST NODE DELETION
 * =========================================================================
 * This program demonstrates how to delete a node from a Binary Search Tree (BST)
 * while maintaining the BST properties. The deletion process varies depending
 * on the number of children the node has.
 *
 * The program includes the following components:
 *
 * 1.  Node Class: Defines the structure for a binary tree node.
 *
 * 2.  insert Function: A recursive helper to insert a new node into the BST.
 *
 * 3.  inorder Function: Performs an inorder traversal to print the tree, which
 * will display the elements in sorted order.
 *
 * 4.  buildBST Function: Builds a BST from an array of integers by calling
 * the `insert` function for each element.
 *
 * 5.  getInorderSucc Function: A helper function for the deletion process. It
 * finds the **in-order successor** of a node, which is the smallest node in
 * its right subtree. This is crucial for Case 3 deletion.
 *
 * 6.  delNode Function: The core function for deleting a node from the BST.
 * - **Time Complexity (TC):** O(h), where 'h' is the height of the tree.
 * In the worst case (a skewed tree), this can be O(n).
 * - **Space Complexity (SC):** O(h), due to the recursion call stack.
 *
 * - **Logic for Deletion:**
 * - **Base Case:** If the tree is empty or the node is not found, return NULL.
 * - **Recursive Search:** Traverse the tree to find the target node (`n`).
 * - **Deletion Cases:** Once the target node (`root->data == n`) is found,
 * it handles three distinct cases:
 * - **Case 1: 0 Children (Leaf Node):** Simply delete the node and return `NULL`.
 * - **Case 2: 1 Child:** Replace the node with its single child and return the child.
 * - **Case 3: 2 Children:** This is the most complex case. The node is replaced by its in-order successor. The successor is then recursively deleted from the right subtree. This ensures the BST property is maintained.
 *
 * 7.  main Function: Initializes an array, builds a BST, and demonstrates the
 * deletion process by first printing the original tree, then deleting a node (7), and
 * finally printing the updated tree.
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
 #include<utility>
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
 
 Node* getInorderSucc(Node* root){
     while(root->left !=NULL){
         root=root->left;
     }
     return root;
 }
 
 Node* delNode(Node* root, int n){
     if(root ==NULL){
         return NULL;
     }
 
     if(n < root->data){
         root->left=delNode(root->left, n);
     } else if(n > root->data){
         root->right=delNode(root->right, n);
     } else{
         // Node to be deleted is found.
         
         // Case 1: Node is a leaf (0 children).
         if(root->left==NULL && root->right==NULL){
             delete root;
             return NULL;
         }
 
         // Case 2: Node has 1 child.
         if(root->left==NULL || root->right==NULL){
             Node* temp = root->left ==NULL ? root->right : root->left;
             delete root;
             return temp;
         }
 
         // Case 3: Node has 2 children.
         Node* IS=getInorderSucc(root->right);
         root->data=IS->data;
         root->right= delNode(root->right, IS->data);
         return root;
     }
     return root;
 } 
 
 int main(){
     int arr[6]={5,1,3,4,2,7};
     Node* root=buildBST(arr, 6);
     
     cout << "Original Tree (inorder): ";
     inorder(root);
     cout<<endl;
 
     // The root of the tree can change, so we must reassign it.
     root = delNode(root, 7);
 
     cout << "Tree after deleting 7 (inorder): ";
     inorder(root);
     cout<<endl;
 
     return 0;
 }