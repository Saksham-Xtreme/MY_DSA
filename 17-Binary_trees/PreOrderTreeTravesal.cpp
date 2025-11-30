#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
using namespace std;

// This class represents a single node in a binary tree.
class Node{
public:
    int data;         // The data stored in the node.
    Node* left;       // A pointer to the left child node.
    Node* right;      // A pointer to the right child node.

    // Constructor to initialize a new node with a given data value.
    Node(int data){
        this->data = data;
        left = right = NULL; // Initialize child pointers to NULL.
    }
};

// A static index to keep track of the current position in the nodes vector.
// Using a static variable allows its state to be maintained across recursive calls.
static int idx = -1;

// A recursive function to build a binary tree from a vector of node data.
// The vector represents a preorder traversal, with -1 indicating a NULL node.
Node* buildTree(vector<int> nodes){
    idx++; // Move to the next element in the vector.

    // Base case: If the current element is -1, it means the node is NULL.
    if(nodes[idx] == -1){
        return NULL;
    }

    // Create a new node with the data from the current vector element.
    Node* currNode = new Node(nodes[idx]);
    
    // Recursively build the left subtree.
    currNode->left = buildTree(nodes);
    
    // Recursively build the right subtree.
    currNode->right = buildTree(nodes);
    
    // Return the newly created node.
    return currNode;
}

// O(n) Time Complexity: This is a preorder traversal, where each node is visited once.
// Space Complexity: O(h), where h is the height of the tree due to the recursion stack.
// Function to perform a preorder traversal of the binary tree.
void preorder(Node* root){
    // Base case: If the current node is NULL, stop the recursion.
    if(root == NULL){
        return;
    }
    
    // 1. Visit the root node (print its data).
    cout<< root->data<<" ";
    
    // 2. Recursively traverse the left subtree.
    preorder(root->left);
    
    // 3. Recursively traverse the right subtree.
    preorder(root->right);
}


int main(){
    // The vector of nodes to build the tree from (preorder traversal).
    // -1 indicates a null child.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the tree and get the root node.
    Node* root = buildTree(nodes);
    
    // Print the data of the root node.
    cout<<"Root -> "<<root->data<<endl;
    
    // Perform and print the preorder traversal of the tree.
    preorder(root);
    cout<<endl;
    
    return 0;
}