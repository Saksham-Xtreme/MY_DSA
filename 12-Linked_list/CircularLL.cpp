#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLL {
public:
    Node* head;

    CircularLL() {
        head = NULL;
    }

    // INSERT AT FRONT
    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;

        while (temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    // INSERT AT END
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }

    // DELETE FRONT
    void pop_front() {
        if (head == NULL) return;

        // Single node case
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        // Reach the last node
        while (temp->next != head)
            temp = temp->next;

        Node* del = head;
        temp->next = head->next;
        head = head->next;

        delete del;
    }

    // DELETE LAST
    void pop_back() {
        if (head == NULL) return;

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }

    // INSERT AT ANY POSITION (1-based)
    void insertAtPos(int val, int pos) {
        if (pos == 1) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            if (temp->next == head) {
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // DELETE AT ANY POSITION (1-based)
    void deleteAtPos(int pos) {
        if (head == NULL) return;

        if (pos == 1) {
            pop_front();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        for (int i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;

            if (temp == head) {
                cout << "Position out of range\n";
                return;
            }
        }

        prev->next = temp->next;
        delete temp;
    }

    // PRINT LIST
    void print() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(HEAD)\n";
    }
};

int main() {
    CircularLL cll;

    cll.push_front(3);
    cll.push_front(2);
    cll.push_front(1);
    cll.push_back(4);
    cll.push_back(5);

    cout << "List: ";
    cll.print();

    cll.pop_front();
    cll.pop_back();

    cout << "\nAfter pop_front() and pop_back(): ";
    cll.print();

    cll.insertAtPos(100, 2);
    cout << "\nAfter insertAtPos(100,2): ";
    cll.print();

    cll.deleteAtPos(3);
    cout << "\nAfter deleteAtPos(3): ";
    cll.print();

    return 0;
}
