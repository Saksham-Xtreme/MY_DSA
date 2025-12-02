#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<class T>
class Stack{
    list<T> ll;

public:
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    T top(){
        return ll.front(); //head ka data
    }

    bool isEmpty(){
        return ll.size()==0; 
    }


};


int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){   // ✅ fix
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class Stack {
// private:
//     Node* head;   // top of stack

// public:
//     // Constructor
//     Stack() {
//         head = NULL;
//     }

//     // Push = insert at head
//     void push(int val) {
//         Node* newNode = new Node(val);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Pop = remove from head
//     void pop() {
//         if (head == NULL) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // Top element
//     int top() {
//         if (head == NULL) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return head->data;
//     }

//     // Check if empty
//     bool isEmpty() {
//         return head == NULL;
//     }

//     // Destructor to free memory
//     ~Stack() {
//         while (head != NULL) {
//             pop();
//         }
//     }
// };


// int main() {
//     Stack s;

//     s.push(3);
//     s.push(2);
//     s.push(1);

//     while (!s.isEmpty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }
