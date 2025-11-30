#include <iostream>
#include <list>
using namespace std;

class Queue {
private:
    list<int> ll;   // using linked list STL

public:

    // push → insert at back
    void push(int val) {
        ll.push_back(val);
    }

    // pop → remove from front
    void pop() {
        if (ll.empty()) {
            cout << "Queue Underflow\n";
            return;
        }
        ll.pop_front();
    }

    // front element
    int front() {
        if (ll.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return ll.front(); // head->data
    }

    // empty check
    bool empty() {
        return ll.empty(); // if head==NULL
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
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

// class Queue {
// private:
//     Node* head;  // front
//     Node* tail;  // rear

// public:
//     Queue() {
//         head = NULL;
//         tail = NULL;
//     }

//     // Insert at end
//     void push(int val) {
//         Node* newNode = new Node(val);

//         if (tail == NULL) {   // queue is empty
//             head = tail = newNode;
//             return;
//         }

//         tail->next = newNode;
//         tail = newNode;
//     }

//     // Remove from front
//     void pop() {
//         if (head == NULL) {
//             cout << "Queue Underflow\n";
//             return;
//         }

//         Node* temp = head;
//         head = head->next;

//         if (head == NULL) // queue becomes empty
//             tail = NULL;

//         delete temp;
//     }

//     // Front element
//     int front() {
//         if (head == NULL) {
//             cout << "Queue is empty\n";
//             return -1;
//         }
//         return head->data;
//     }

//     // Check empty
//     bool empty() {
//         return head == NULL;
//     }

//     ~Queue() {
//         while (!empty()) {
//             pop();
//         }
//     }
// };


// int main() {
//     Queue q;

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);

//     while (!q.empty()) {
//         cout << q.front() << endl;
//         q.pop();
//     }

//     return 0;
// }
