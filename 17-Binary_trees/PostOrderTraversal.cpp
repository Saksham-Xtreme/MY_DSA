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
// This allows the buildTree function to maintain its state across recursive calls.
static int idx = -1;

// A recursive function to build a binary tree from a preorder traversal in a vector.
// The vector uses -1 to represent a null node.
Node* buildTree(vector<int> nodes){
    idx++; // Increment the index to process the next node.

    // Base case: If the current element is -1, it's a null node, so return NULL.
    if(nodes[idx] == -1){
        return NULL;
    }

    // Create a new node with the data from the current vector element.
    Node* currNode = new Node(nodes[idx]);
    
    // Recursively build the left subtree.
    currNode->left = buildTree(nodes);
    
    // Recursively build the right subtree.
    currNode->right = buildTree(nodes);
    
    // Return the newly created node as the root of its subtree.
    return currNode;
}

void postOrder(Node* root){

    if(root==NULL){
        return;
    }

    //left
    postOrder(root->left);

    //right
    postOrder(root->right);

    //root
    cout<< root->data<<" ";

}


int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
   
    postOrder(root);
    
    cout<<endl;
    return 0;
}