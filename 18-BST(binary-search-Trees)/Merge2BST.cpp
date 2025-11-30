/*
 * =========================================================================
 * NOTES ON MERGING TWO BSTs
 * =========================================================================
 * This program demonstrates how to merge two separate Binary Search Trees
 * (BSTs) into a single, perfectly balanced BST. The approach uses a
 * three-step process that is both straightforward and efficient.
 *
 * The core idea is:
 * 1.  **Extract Sorted Data**: Perform an in-order traversal on both BSTs to get
 * all their elements in a sorted order.
 * 2.  **Merge Sorted Arrays**: Combine the two sorted lists into a single,
 * merged sorted list.
 * 3.  **Build Balanced Tree**: Construct a new, perfectly balanced BST from the
 * single sorted list. This is done recursively by taking the middle
 * element as the root and repeating the process for the left and right halves.
 *
 * ### Key Components
 *
 * 1.  `Node` Class: Standard definition of a tree node.
 *
 * 2.  `getInorder` Function: Performs an in-order traversal of a BST and stores
 * the node data in a vector, resulting in a sorted sequence.
 * - **TC: O(n1)**, where 'n1' is the number of nodes in the BST.
 * - **SC: O(n1)**, for the vector storing the nodes.
 *
 * 3.  `BuildSortedVec` Function: Builds a balanced BST from a sorted vector.
 * - **TC: O(n)**, where 'n' is the number of nodes in the vector.
 * - **SC: O(n)**, for the new tree created.
 *
 * 4.  `mergeBST` Function: The main function that orchestrates the merging.
 * - **TC: O(n1 + n2)**, where n1 and n2 are the number of nodes in the two trees.
 * - **SC: O(n1 + n2)**, for the auxiliary vectors used to store the node data.
 *
 * ### `mergeBST` Logic:
 * - It first gets the sorted sequences from both trees (`n1` and `n2` vectors).
 * - It then uses a two-pointer approach (similar to merge sort) to merge the
 * two sorted vectors into a single, combined sorted vector (`fn`).
 * - Finally, it calls `BuildSortedVec` to construct a new, balanced BST from `fn`.
 *
 * 5.  `main` Function: Creates two sample BSTs, merges them using `mergeBST`,
 * and prints the preorder traversal of the resulting tree to verify the merge.
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
         this->data = data;
         left = right = NULL;
     }
 };
 
 void getInorder(Node* root, vector<int> &nodes){
     if(root==NULL){
         return;
     }
 
     getInorder(root->left, nodes);
     nodes.push_back(root->data);
     getInorder(root->right, nodes);
 }
 
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
 
 void preorder(Node* root){
     if(root==NULL){
         return;
     }
 
     cout<< root->data <<" ";
     preorder(root->left);
     preorder(root->right);
 }
 
 
 Node* mergeBST(Node* root1, Node* root2){
     vector<int> n1;
     vector<int> n2;
     vector<int> fn;
 
     getInorder(root1, n1);
     getInorder(root2, n2);
 
     int i=0, j=0;
     while(i<n1.size() && j<n2.size()){
         if(n1[i] < n2[j]){
             fn.push_back(n1[i++]);
         } else{
             fn.push_back(n2[j++]);
         }
     }
 
     while(i<n1.size()){
         fn.push_back(n1[i++]);
     }
     while(j<n2.size()){
         fn.push_back(n2[j++]);
     }
 
     return BuildSortedVec(fn,0,fn.size()-1);
 }
 
 int main(){
     Node* root1 = new Node(2);
     root1->left= new Node(1);
     root1->right= new Node(4);
 
     Node* root2 = new Node(9);
     root2->left= new Node(3);
     root2->right= new Node(12);
 
     Node* root=mergeBST(root1,root2);
     preorder(root);
     cout<<endl;
     return 0;
 }