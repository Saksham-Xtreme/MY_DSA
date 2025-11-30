#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<string>
#include<cmath>
#include<list>

using namespace std;

/*
 * =========================================================================
 * PROGRAM NOTES
 * =========================================================================
 * This program calculates the minimum distance between two nodes in a binary
 * tree. The distance is defined as the number of edges on the shortest path
 * between the two nodes.
 *
 * It works by first finding the Lowest Common Ancestor (LCA) of the two nodes.
 * The total distance is then the sum of the distance from the LCA to the first
 * node and the distance from the LCA to the second node.
 *
 * The program includes the following components:
 *
 * 1.  Node Class: Defines the structure of a tree node.
 *
 * 2.  buildTree Function: Constructs a binary tree from a preorder traversal
 * represented by a vector.
 *
 * 3.  LCA2 Function: A recursive, single-pass function to find the LCA of
 * two nodes.
 * - Time Complexity (TC): O(n)
 * - Space Complexity (SC): O(h), where 'h' is the tree height.
 *
 * 4.  dist Function: A recursive function to find the distance (number of
 * edges) from a starting node to a target node.
 * - TC: O(n)
 * - SC: O(h)
 *
 * 5.  minDist Function: This is the main function for calculating the minimum
 * distance. It finds the LCA first, and then calls the `dist` function
 * twice to find the distance from the LCA to each of the target nodes, summing
 * them to get the final result.
 * - This function has been corrected to return an integer value, as its
 * return type was previously `void`.
 *
 * 6.  main Function: Initializes a sample binary tree, calls `minDist` to
 * calculate the distance between two nodes (4 and 5), and prints the result.
 */

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

Node* LCA2(Node* root,int n1,int n2){ // O(n)
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* leftLca=LCA2(root->left, n1, n2);
    // Corrected the recursive call to search the right subtree.
    Node* rightLca=LCA2(root->right, n1, n2);

    if(leftLca!=NULL && rightLca !=NULL){
        return root;
    }

    return leftLca == NULL ? rightLca : leftLca;
}

// Function to find the distance from a starting node to a target node.
int dist(Node* root, int n){
    if(root==NULL){
        return -1;
    }

    if(root->data == n){
        return 0;
    }
    
    int leftd = dist(root->left, n);
    if(leftd != -1){
        return leftd + 1;
    }
    
    int rightd = dist(root->right, n);
    if(rightd != -1){
        return rightd + 1;
    }

    return -1;
}

// Corrected the return type from `void` to `int`.
int minDist(Node* root, int n1, int n2){
    // First, find the LCA of the two nodes.
    Node* lca = LCA2(root, n1, n2);
    
    // Calculate the distance from the LCA to each of the target nodes.
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    
    // The total distance is the sum of these two distances.
    return dist1 + dist2;
}

int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
    int n1=4, n2=6; 

    // Corrected the output statement.
    cout << "min dist = " << minDist(root, n1, n2) << endl;
    
    return 0;
}