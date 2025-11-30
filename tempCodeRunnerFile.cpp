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

void topView(Node* root){
    queue<pair<Node*, int>> Q; //(node, h-d);
    map<int ,int> m; //(h-d, node->data);

    Q.push(make_pair(root, 0));

    while(!Q.empty()){
        pair<Node*, int> curr=Q.front();
        Q.pop();

        Node* currNode=curr.first;
        int currHD=curr.second;

        if(m.count(currHD)==0){ // hd-> add to map cause it is unique
            m[currHD]=currNode->data;
        }

        if(currNode->left !=NULL){
            pair<Node*, int> left=make_pair(currNode->left, currHD-1);
            Q.push(left);
        }

        if(currNode->right !=NULL){
            pair<Node*, int> right=make_pair(currNode->right, currHD+1);
            Q.push(right);
        }

    }

    for(auto it: m){
        cout<<it.second<<" ";
        
    }
    cout<<endl;

}


int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    // Build the binary tree from the vector and get the root.
    Node* root = buildTree(nodes);
    
   topView(root);
   
  
    
    return 0;
}