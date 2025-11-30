#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        nnext=NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next=NULL;
        }
    }
};

class List{
public:
    
};