#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
using namespace std;

class Stack{
    deque<int> deq;
public: 
    void push(int data){
        deq.push_back(data);

    }

    void pop(){
        deq.pop_back();
    }

    int top(){
        return deq.back();
    }
};

int main(){
    Stack q;

    for(int i=1;i<=5;i++){
        q.push(i);
        
    }
    for(int i=1;i<=5;i++){
        cout<< q.top()<<endl;
        q.pop();
        
    }

    return 0;
}