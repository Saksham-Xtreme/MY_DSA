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
 * This program is designed to find the Lowest Common Ancestor (LCA) of two
 * nodes in a binary tree. It includes the following components:
 *
 * 1.  Node Class: Defines the structure of a tree node with integer data and
 * pointers to its left and right children.
 *
 * 2.  buildTree Function: Constructs the binary tree from a vector that
 * represents a preorder traversal. It uses a global static index (`idx`)
 * to keep track of the current element being processed in the vector. A
 * value of -1 indicates a null node.
 *
 * 3.  FindPath Function: A recursive helper function that finds the path from
 * the root to a target node. It stores the path in a vector. The function
 * returns `true` if the node is found and `false` if not, backtracking by
 * popping elements from the path vector if a path does not lead to the target.
 *
 * 4.  LCA Function: The main algorithm for finding the LCA. It works by:
 * a. Calling `FindPath` twice to get the paths from the root to each of
 * the two target nodes (`n1` and `n2`).
 * b. Iterating through both paths simultaneously from the root.
 * c. The last common node in both paths is the LCA. As soon as the paths
 * diverge, the previously stored common node is returned.
 *
 * 5.  main Function: Initializes a sample tree from a vector of nodes and
 * then calls the `LCA` function to find and print the LCA of two specified
 * nodes.
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

bool FindPath(Node* root,int n, vector<int> &path){
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data==n){
        return true;
    }

    bool isleft = FindPath(root->left,n,path);
    bool isright = FindPath(root->right,n,path);

    if(isleft || isright){
        return true;
    }

    path.pop_back();
    return false;


}

int LCA(Node* root, int n1, int n2){
    vector<int> path1;
    vector<int> path2;

    FindPath(root,n1,path1);
    FindPath(root,n2,path2);

    int lca=-1;
    for(int i=0,j=0;i<path1.size() && j<path2.size();i++,j++){
        if(path1[i] != path2[j]){
            return lca;
        }

        lca=path1[i];
    }

    return lca;

}

int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
    // The two nodes for which to find the LCA.
    int n1=4, n2=5;

    // Call the LCA function and print the result.
    cout<<"lca = "<< LCA(root, n1, n2)<<endl;
    
    return 0;
}