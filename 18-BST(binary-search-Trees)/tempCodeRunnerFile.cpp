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

class Info{
public:
    bool isBST;
    int min;
    int max;
    int sz;

    Info(bool isBST,int min, int max, int sz){
        this->isBST=isBST;
        this->min=min;
        this->max=max;
        this->sz=sz;
    }

};
static int maxSize=0;
Info* largestBST(Node* root){
    
    if(root==NULL){
        return new Info(true, INT_MAX, INT_MIN, 0);
    }

    Info* leftinfo= largestBST(root->left);
    Info* rightinfo= largestBST(root->right);

    int currMin=min(root->data, min(leftinfo->min, rightinfo->min));
    int currMax=max(root->data, max(leftinfo->max, rightinfo->max));
    int currSz=leftinfo->sz + rightinfo->sz+1;

    if(leftInfo->isBST && rightInfo->isBST
        && root->data > leftInfo->max
        && root->data < rightinfo->min){
            maxSize = max(maxSize, currSz);
            return new Info(true, currMin, currMax, currSz);

    }

    return new Info(false, currMin, currMax, currSz);

}

int main(){
    Node* root= new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    
    
    root->right= new Node(60);
    root->right->left= new Node(45);
    root->right->right= new Node(70);
    root->right->right->left= new Node(60);
    root->right->right->right= new Node(80);

    largestBST(root);
    cout<< " max size -> "<< maxSize<<endl;
    return 0;
}                                     