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


Node* buildTree(vector<int> nodes){
    idx++; 

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

void KthHelper(Node* root, int K,int currLevel){
    
    if(root==NULL){
        return;
    }

    if(currLevel==K){
        cout<< root->data<<" ";
        return;
    }

    KthHelper(root->left, K, currLevel+1); // for left
    KthHelper(root->right, K, currLevel+1); // for right
}

void KthLevel(Node* root, int K){

    KthHelper(root,K,1);
    cout<<endl;
}

int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
   
   
    KthLevel(root,2);
    
    return 0;
}