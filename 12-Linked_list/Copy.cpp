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

    // adding element from front
    void push_front(int val){
        Node* newNode = new  Node(val);// dynamic 
        if(head == NULL){
            head=tail=newNode;
        } else{
            newNode->next=head;
            head=newNode;
        }
    }

    // pop front
    void pop_front(){
        if(head==NULL){
            cout<<"empty";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
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