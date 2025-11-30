#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>


using namespace std;

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


static int idx = -1;

/*
buildTree Function:
Purpose: Recursively constructs the tree from a vector<int>.
Key Logic: It uses a static index to track the current position.
A value of -1 indicates a NULL node, serving as the base case for recursion.
*/
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

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHt=height(root->left);
    int rightHt=height(root->right);

    int currHt= max(leftHt,rightHt)+1;
    return currHt;
}

int daim1(Node* root){
    if(root==NULL){
        return 0;
    }
    int currDaim=height(root->left)+height(root->right)+1;
    int leftDaim=daim1(root->left);
    int rightDaim=daim1(root->right);

    return max(currDaim,max(leftDaim,rightDaim));

}


int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
   
   
   cout<<"daim 1 -> "<<daim1(root)<<endl;
    
    return 0;
}