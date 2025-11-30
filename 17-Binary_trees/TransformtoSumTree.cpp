/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program transforms a binary tree into a "Sum Tree". In this
 * transformation, the new value of each node becomes the sum of the
 * original values of all nodes in its left and right subtrees.
 *
 * The program is structured as follows:
 *
 * 1.  Node Class: Defines the structure of a tree node.
 *
 * 2.  buildTree Function: Constructs a binary tree from a preorder traversal.
 *
 * 3.  transform Function: This is the core recursive function that performs
 * the tree transformation. It uses a **post-order traversal** approach.
 * - **TC: O(n)**, as it visits each node once.
 * - **SC: O(h)**, where 'h' is the tree's height, due to the recursion stack.
 *
 * - **Logic:**
 * - The function recursively calls itself on the left and right children.
 * - It stores the original value of the current node before it's modified.
 * - It updates the current node's data by summing the values returned from
 * its left and right child's recursive calls. These return values
 * represent the total sum of their respective subtrees.
 * - It then returns the *original* value of the current node. This is crucial
 * for its parent node to use in its own sum calculation.
 *
 * 4.  levelOrder Function: A standard level-order (or Breadth-First) traversal
 * function to print the tree level by level. This is useful for verifying the
 * transformed tree's structure and values.
 *
 * 5.  main Function: Initializes a sample tree, calls `transform` to modify it,
 * and then uses `levelOrder` to print the transformed tree.
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
 
 // Corrected logic for tree transformation using post-order traversal.
 int transform(Node* root){
     // Base Case: If the node is NULL, return 0.
     if(root==NULL){
         return 0;
     }
 
     // Leaf node case: If a node is a leaf, return its data and don't change it yet.
     if(root->left == NULL && root->right == NULL){
         return root->data;
     }
 
     // Store the current node's original data.
     int currOld = root->data;
 
     // Recursively call on left and right subtrees to get the sum of their original values.
     int leftOldSum = transform(root->left);
     int rightOldSum = transform(root->right);
 
     // Update the current node's data with the sum of its subtrees' original values.
     root->data = leftOldSum + rightOldSum;
     
     // Return the current node's *original* value plus its subtree sums for its parent's calculation.
     return currOld + root->data;
 }
 
 void levelOrder(Node* root){
     if(root == NULL){
         return;
     }
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
 
     while(!q.empty()){
         Node* curr = q.front();
         q.pop();
 
         if(curr == NULL){
             cout << endl;
             if(q.empty()){
                 break;
             }
             q.push(NULL);
             
         } else {
             cout << curr->data << " ";
             if(curr->left != NULL){
                 q.push(curr->left);
             }
             if(curr->right != NULL){
                 q.push(curr->right);
             }
         }
     }
 }
 
 int main(){
     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
     Node* root = buildTree(nodes);
     
     transform(root);
     levelOrder(root);
      
     return 0;
 }