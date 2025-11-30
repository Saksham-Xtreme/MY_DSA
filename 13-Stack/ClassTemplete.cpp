#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){   // O(1)
        vec.push_back(val);
    }

    void pop(){  // O(1)
        if(isEmpty()){
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    T top(){ // O(1)
       /* if(isEmpty()){
            cout << "stack is empty\n";
            return -1;   // error code
        }*/
        
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack<string> s;
    s.push("saksham");
    s.push("is");
    s.push("best");

    while(!s.isEmpty()){   // ✅ fix
        cout << s.top()<<" ";
        s.pop();
    }

    return 0;
}
