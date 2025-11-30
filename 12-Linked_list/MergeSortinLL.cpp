#include<iostream>
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

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printll() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Split list into two halves
Node* splitMid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev != NULL) {
        prev->next = NULL; // break the list into 2 halves
    }

    return slow; // right half head
}

// Merge two sorted lists
Node* merge(Node* l, Node* r) {
    if (!l) return r;
    if (!r) return l;

    Node* result = NULL;

    if (l->data <= r->data) {
        result = l;
        result->next = merge(l->next, r);
    } else {
        result = r;
        result->next = merge(l, r->next);
    }

    return result;
}

// Merge Sort for Linked List
Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* mid = splitMid(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(mid);

    return merge(left, right);
}


int main() {
    List ll;
    ll.push_front(4);
    ll.push_front(8);
    ll.push_front(2);
    ll.push_front(5);

    cout << "Original List:\n";
    ll.printll();

    ll.head = mergeSort(ll.head);

    cout << "Sorted List:\n";
    ll.printll();

    return 0;
}
