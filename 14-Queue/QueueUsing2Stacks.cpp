#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){
        // s1 -> s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);

        // s2 -> s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        if(s1.empty()){
            cout << "Queue is empty\n";
            return;
        }
        s1.pop();
    }

    int front(){ // Changed return type to int
        if(s1.empty()){
            cout << "Queue is empty\n";
            return -1; // Return -1 to indicate the queue is empty
        }
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << endl; // Output the front element
        q.pop();
    }
    return 0;
}