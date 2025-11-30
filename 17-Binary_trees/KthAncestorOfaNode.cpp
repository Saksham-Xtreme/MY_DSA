/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program is designed to find the Kth ancestor of a given node in a
 * binary tree. An ancestor is a parent of a node, a parent of a parent, and so on.
 * The Kth ancestor is the node that is 'K' levels above the target node.
 *
 * It works by recursively traversing the tree to find the target node. During
 * the backtracking phase of the recursion, it calculates the distance from
 * the current node to the target and checks if this distance equals 'K'.
 *
 * The program includes the following components:
 *
 * 1.  Node Class: Defines the structure for a binary tree node.
 *
 * 2.  buildTree Function: Constructs a binary tree from a preorder traversal
 * represented by a vector.
 *
 * 3.  KthAncestor Function: This is the core recursive function for finding the
 * Kth ancestor.
 * - **Time Complexity (TC): O(n)**, as it traverses every node in the worst case.
 * - **Space Complexity (SC): O(h)**, where 'h' is the tree height, due to the
 * recursion stack.
 *
 * - **Logic:**
 * - **Base Case:** If the current node is `NULL`, it returns `-1` (indicating
 * the node was not found). If the current node is the target node, it returns `0`
 * (distance from itself).
 * - **Recursive Calls:** It recursively calls itself on the left and right
 * subtrees to find the target node.
 * - **Distance Calculation:** As the recursion unwinds (backtracks), it calculates
 * the distance of the current node from the target by adding `1` to the distance
 * returned by its child.
 * - **Kth Ancestor Check:** When the calculated distance equals `k`, it prints
 * the current node's data as the Kth ancestor.
 * - **Return Value:** It returns the distance from the current node to the target,
 * which is used by its parent to continue the distance calculation.
 *
 * 4.  main Function: Initializes a sample binary tree and then calls `KthAncestor`
 * to find and print the Kth ancestor of a specified node.
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
 
 int KthAncestor(Node* root, int node, int k){
     if(root==NULL){
         return -1;
     }
 
     if(root->data==node){
         return 0;
     }
 
     int leftD=KthAncestor(root->left, node, k);
     int rightD=KthAncestor(root->right, node, k);
 
     if(leftD== -1 && rightD== -1){
         return -1;
     }
 
     int validVal=leftD==-1 ? rightD : leftD;
 
     if(validVal+1==k){
         cout<<"Kth Ancestor -> " << root->data<<endl;
     }
 
     return validVal+1;
 }
 
 int main(){
     // The vector of nodes representing a preorder traversal of the tree.
     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
     
     // Build the binary tree from the vector and get the root.
     Node* root = buildTree(nodes);
     
     int node=5, k=2; 
 
     KthAncestor(root,node,k);
     
     return 0;
 }