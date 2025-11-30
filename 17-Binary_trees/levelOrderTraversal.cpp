#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>

// We're using the std namespace to avoid writing 'std::' everywhere.
using namespace std;

/*
This code is a great example of two core concepts in data structures:
1. Building a binary tree from a given array.
2. Performing a level-order traversal (also known as Breadth-First Search or BFS)
   to print the tree's contents level by level.
*/
class Node{
public:
    // The data stored in the node.
    int data;         
    // A pointer to the left child node.
    Node* left;       
    // A pointer to the right child node.
    Node* right;      

    // Constructor to initialize a new node with a given data value.
    Node(int data){
        this->data = data;
        left = right = NULL; // Initially, a new node has no children.
    }
};

/*
This static index keeps track of our current position in the nodes vector.
It allows the buildTree function to maintain its state across recursive calls.
*/
static int idx = -1;

/*
This recursive function builds a binary tree from a preorder traversal in a vector.
The vector uses -1 to represent a null node.
*/
Node* buildTree(vector<int> nodes){
    // Increment the index to process the next node.
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

/*
This function is a classic example of Breadth-First Search (BFS). 
It visits and prints all nodes at a given level before moving on to the next level.
It uses a queue to keep track of the nodes to visit.
*/
void levelOrder(Node* root){
    // If the tree is empty, there is nothing to do.
    if(root == NULL){
        return;
    }
    // Create a queue to hold nodes to be processed.
    queue<Node*> q;
    q.push(root);
    // Use NULL as a marker to signal the end of a level.
    q.push(NULL);

    // Keep processing until the queue is empty.
    while(!q.empty()){
        // Get the current node from the front of the queue.
        Node* curr = q.front();
        q.pop();

        // Check if the current node is the NULL marker.
        if(curr == NULL){
            // If it is, a level has ended, so print a newline.
            cout << endl;
            // If the queue is now empty, we are done.
            if(q.empty()){
                break;
            }
            // Otherwise, push another NULL to mark the end of the next level.
            q.push(NULL);
            
        } else {
            // If the current node is a real node, print its data.
            cout << curr->data << " ";

            // If the node has a left child, push it onto the queue.
            if(curr->left != NULL){
                q.push(curr->left);
            }

            // If the node has a right child, push it onto the queue.
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}


int main(){
    // The vector of nodes representing a preorder traversal of the tree.
    // The -1s indicate a null child.
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    
    // Build the binary tree from the vector and get the root node.
    Node* root = buildTree(nodes);
    
    // Perform and print the level-order traversal of the tree.
    levelOrder(root);
    cout << endl;
    return 0;
}