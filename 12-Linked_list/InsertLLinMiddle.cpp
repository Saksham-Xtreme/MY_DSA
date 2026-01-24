#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next=NULL;
        }
    }

};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail=NULL;
    }

    ~List(){
        if(head != NULL){
            delete head;
            head=NULL;
        }
    }

    // printing linked list
    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

};