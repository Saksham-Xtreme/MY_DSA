#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = tail = NULL;
    }

    // Insert at front
    void push_front(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        } else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    // Insert at end
    void push_back(int val){
        Node* newnode = new Node(val);
        
        if(head == NULL){
            head = tail = newnode;
        } else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    // Delete from front
    void pop_front(){
        if(head == NULL) return;

        Node* temp = head;
        head = head->next;

        if(head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete temp;
    }

    // Delete from end
    void pop_back(){
        if(head == NULL) return;

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;

        delete temp;
    }

    // Insert at any position (1-based index)
    void insertAtPosition(int val, int pos){
        if(pos == 1){
            push_front(val);
            return;
        }

        Node* newnode = new Node(val);
        Node* temp = head;

        for(int i = 1; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }

        if(temp == tail){
            push_back(val);
            return;
        }

        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    // Delete from any position
    void deleteAtPosition(int pos){
        if(head == NULL) return;

        if(pos == 1){
            pop_front();
            return;
        }

        Node* temp = head;
        for(int i = 1; i < pos; i++){
            if(temp == NULL){
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }

        if(temp == tail){
            pop_back();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
    }

    // Print list forward
    void printForward(){
        Node* temp = head;
        cout << "FORWARD: ";
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Print list backward
    void printBackward(){
        Node* temp = tail;
        cout << "BACKWARD: ";
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }

};

int main(){
    DoublyList dbll;

    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.push_back(4);
    dbll.push_back(5);

    dbll.printForward();
    dbll.printBackward();

    dbll.pop_front();
    dbll.pop_back();

    cout << "\nAfter pop operations:\n";
    dbll.printForward();

    dbll.insertAtPosition(100, 3);
    dbll.printForward();

    dbll.deleteAtPosition(2);
    dbll.printForward();

    return 0;
}
