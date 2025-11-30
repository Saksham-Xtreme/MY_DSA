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
public:
    Node* head;
    Node* tail;

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

    void removeCycle(Node* head){

        // delete cycle
        Node* slow = head;
        Node* fast = head;
        bool isCycle=true;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"cycle exist\n";
                isCycle=true;
                break;
            }
        }

        if(!isCycle){
            cout<<"cycle doesnt exist\n";
            return;
        } 
        slow=head;
        if(slow==fast){// spc case t->h

            while(fast->next != slow){
                fast=fast->next;
            }
            fast->next=NULL;// remove cycle

        } else{
            Node* prev=fast;
            while(slow!= fast){
                slow=slow->next;
                prev=fast;
                fast=fast->next;
            }
            prev=prev->next;// remove cycle
        }

    }



};

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;

    ll.removeCycle(ll.head);
    ll.printll();
    return 0;


}