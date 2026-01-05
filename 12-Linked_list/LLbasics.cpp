/*
    ================================
    LINKED LIST NOTES (SINGLY LL)
    ================================

    1. What is a Linked List?
       - A data structure consisting of nodes.
       - Each node contains:
            * data  → the actual value
            * next  → pointer to the next node
       - Unlike arrays, linked lists do not store elements in contiguous memory.
       - Dynamic in size (can grow/shrink at runtime).

    2. Advantages of Linked Lists:
       - Dynamic size (no need to define fixed size).
       - Easy insertion and deletion at front/back/middle.

    3. Disadvantages:
       - Extra memory for pointer storage.
       - Sequential access only (cannot do direct access like arrays).
       - Slightly slower traversal compared to arrays.

    4. Types of Linked Lists:
       - Singly Linked List → each node has next pointer.
       - Doubly Linked List → each node has prev + next pointer.
       - Circular Linked List → last node points to first node.

    5. Common Operations (Implemented Below):
       - push_front(val)    → Insert node at the beginning
       - push_back(val)     → Insert node at the end
       - insert(val, pos)   → Insert node at a given position
       - pop_front()        → Delete node from beginning
       - pop_back()         → Delete node from end
       - printll()          → Print the list
       - search(val)        → Search for value using loop
       - searchRec(val)     → Search for value using recursion
       - reverse()          → Reverse the linked list
       - removeNth(n)       → Remove nth node from end

    6. Time Complexity (Singly Linked List):
       - Insertion at head: O(1)
       - Insertion at tail: O(1) (if tail pointer maintained, else O(n))
       - Insertion at middle: O(n) (need traversal)
       - Deletion at head: O(1)
       - Deletion at tail: O(n) (need traversal to second last node)
       - Searching: O(n)
       - Reversing: O(n)
       - Printing: O(n)

    7. Notes about Memory:
       - Each node is created dynamically using `new`.
       - Destructor (~Node, ~List) is used to free memory when not required.
       - Always free memory (delete) to avoid memory leaks.

    8. Example Use Case:
       Linked list can be used where insertion/deletion is frequent 
       (queues, stacks, adjacency list in graphs, etc.)

*/

#include<iostream>
using namespace std;

class Node{
public:
    int data;      // stores value
    Node* next;    // pointer to next node

    Node(int val){
        data=val;
        next=NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;   // recursively deletes rest of list
            next=NULL;
        }
    }
};

class List{
public:
    Node* head;   // first node of list
    Node* tail;   // last node of list

    List(){
        head = NULL;
        tail=NULL;
    }

    ~List(){
        if(head != NULL){
            delete head;   // delete entire linked list
            head=NULL;
        }
    }

    // Add element at front → O(1)

    void push_front(int val){
        Node* newNode = new  Node(val);
        if(head == NULL){
            head=tail=newNode; // first node
        } else{
            newNode->next=head; // 5 1 2 3 4
                                               
            head=newNode;
        }
    }


    
    // Add element at end → O(1) if tail maintained
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head=tail=newNode;
        } else{
            tail->next= newNode; // 1 2 3 4-> newode
            tail=newNode;
        }
    }

    // Insert at position → O(n)
    void insert(int val,int pos){
        Node* newNode=new Node(val);

        Node* temp= head;

        for(int i=0;i<pos-1;i++){ // 1 3 4 5 6 
            if(temp==NULL){
                cout<<"pos is invaild\n";
                return;
            }
            temp=temp->next;
        }

        // 1 2 3 4->7-> 5 6
        // 

        // temp is now at pos-1 i.e left
        newNode->next=temp->next;
        temp->next=newNode;
    }


    // Print entire linked list
    void printll(){
        Node* temp = head;  
        while(temp != NULL){
            cout<< temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    // Delete first element → O(1)
    void pop_front(){
        if(head==NULL){
            cout<<"empty";
            return;
        }

        Node* temp=head;
        head=head->next; //  2  3
        temp->next=NULL;
        delete temp;


    }

    // Delete last element → O(n)
    void pop_back(){
        Node* temp=head;
        while(temp->next->next != NULL){    1 2 3 4->null   
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    // Search (Iterative) → O(n)
    int search(int val){
        Node* temp= head;
        int idx=0;

        while(temp != NULL){
            if(temp->data==val){
                return idx;
            }

            temp=temp->next;
            idx++;
        }

        return -1;
    }
    
    // Recursive helper function
    int helper(Node* temp,int val){
        if(temp== NULL){
            return -1;
        }
        if(temp->data == val){
            return 0;
        }
        int idx=helper(temp->next,val);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }

    // Search (Recursive) → O(n)
    int searchRec(int val){
        return helper(head,val);
    }

    // Reverse linked list → O(n)
    void reverse(){
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr != NULL){
            Node* next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;
    }

    // Remove nth node from end → O(n)
    int Getsize(){
        int size=0;
        Node* temp=head;
        while(temp != NULL){
            size++;
            temp=temp->next;
        }
        return size;
    }

    void removeNth(int n){
        Node* prev=head;
        int size= Getsize();
        for(int i=1;i<(size-n);i++){
            prev = prev->next;
        }
        prev->next=prev->next->next;
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();

    ll.push_back(7);
    ll.push_back(9);
    ll.printll();
    ll.insert(6,2);
    ll.printll();

    ll.pop_front();
    ll.printll();

    ll.pop_back();
    ll.printll();

    cout<<ll.search(3)<<endl;
    cout<<ll.searchRec(3)<<endl;

    ll.reverse();
    ll.printll();

    ll.removeNth(2);
    ll.printll();

    return 0;
}







