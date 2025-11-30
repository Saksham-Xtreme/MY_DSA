#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next=NULL;
    }
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head=tail=NULL;

    }
    
    void push_front(int val){
        Node* newnode = new Node(val);
        
        if(head==NULL){
            head=tail=newnode;

        } else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }

    }

    void pop_front(int val){
        Node* temp=head;
        head=head->next;

        if(head!=NULL){
            head->prev=NULL;
        }

        temp->next=NULL;
        delete temp;

    }

    void printL(){


        Node* temp=head;

        while(temp != NULL){
            cout<< temp->data <<" <=> ";
            temp=temp->next;
        }
        
        cout<<"NULL\n";

    }

};

int main(){
    DoublyList dbll;

    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    cout<<endl;
    dbll.printL();
    cout<<endl;

    dbll.pop_front(1);
    dbll.pop_front(4);


    cout<<endl;
    dbll.printL();
    cout<<endl;

    return 0;

}