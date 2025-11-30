/*
 * =========================================================================
 * NOTES ON BINARY SEARCH TREE (BST) SEARCH
 * =========================================================================
 * BST Search is the process of finding a specific value within the tree.
 * The algorithm leverages the BST property to efficiently narrow down the
 * search space.
 *
 * How it works:
 * 1. Start at the root node.
 * 2. If the target value is equal to the current node's value, the search
 * is successful.
 * 3. If the target value is less than the current node's value, move to the
 * left child.
 * 4. If the target value is greater than the current node's value, move to the
 * right child.
 * 5. Repeat this process until the value is found or the search reaches a
 * NULL pointer, which means the value is not in the tree.
 *
 * Time and Space Complexity:
 *
 * The time complexity for searching in a BST is O(h), where 'h' is the
 * height of the tree.
 *
 * - Best/Average Case (Balanced Tree): O(log n)
 * When the tree is balanced, its height is logarithmic with respect to the
 * number of nodes (n). Each comparison effectively halves the remaining
 * search space.
 *
 * - Worst Case (Skewed Tree): O(n)
 * In the worst-case scenario, the tree becomes a linked list (either
 * completely left-skewed or right-skewed).  In this
 * case, the height is equal to 'n', and the search degrades to a linear
 * traversal, requiring a visit to every node in the worst case.
 *
 * The space complexity for a recursive search is O(h) due to the recursion
 * call stack, while an iterative search has a space complexity of O(1).
 *
 * ========================================================================= */


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
 

bool search(Node* root, int key){ //O(h)
    if(root==NULL){
        return false;
    }

    if(root->data==key){
        return true;
    }

    if(root->data >key){
        return search(root->left, key);
    } else{
        return search(root->right, key);
    }

    
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
     cout<<search(root, 3)<<endl;


     return 0;
 }