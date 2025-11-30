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

bool isIdentical(Node* root1, Node* root2){

    if(root1==NULL && root2==NULL){
        return true;
    } else if(root1==NULL || root2==NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }

    return isIdentical(root1->left,root2->left)&&
    isIdentical(root1->right,root2->right);
}

bool isSubtree(Node* root, Node* subRoot){
    if(root==NULL && subRoot==NULL){
        return true;
    } else if(root==NULL || subRoot==NULL){
        return false;
    }

    if(root->data == subRoot->data){
        if(isIdentical(root,subRoot)){
            return true;
        }
    }
    
    int isLeft= isSubtree(root->left, subRoot);
    if(!isLeft){
        isSubtree(root->right, subRoot);
    }

    return true;
}


int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
   Node* subRoot=new Node(2);
   subRoot->left=new Node(4);
   subRoot->right=new Node(5);

   cout<< isSubtree(root, subRoot)<<endl;
  
    
    return 0;
}