#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;
public:
    void push(int val){   // O(1)
        vec.push_back(val);
    }

    void pop(){  // O(1)
        if(isEmpty()){
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    int top(){ // O(1)
        if(isEmpty()){
            cout << "stack is empty\n";
            return -1;   // error code
        }
        
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack s;
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

// class Stack {
// private:
//     int arr[100];   // static array (size 100)
//     int topIndex;   // points to top element

// public:
//     Stack() {
//         topIndex = -1;   // stack is empty
//     }

//     // Push element on top
//     void push(int val) {
//         if (topIndex == 99) {
//             cout << "Stack Overflow\n";
//             return;
//         }
//         arr[++topIndex] = val;
//     }

//     // Pop top element
//     void pop() {
//         if (topIndex == -1) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         topIndex--;
//     }

//     // Read top element
//     int top() {
//         if (topIndex == -1) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return arr[topIndex];
//     }

//     // Check if empty
//     bool isEmpty() {
//         return topIndex == -1;
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
