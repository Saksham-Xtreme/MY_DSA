#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void QueueReversal( queue<int> &Q){
    stack<int> s;
    int n=Q.size();
    for(int i=0;i<n;i++){
        s.push(Q.front());
        Q.pop();
      
    }
    for(int i=0;i<n;i++){
        Q.push(s.top());
        s.pop();
    }




    
}

int main(){
    queue<int> Q;
    for(int i=1;i<=5;i++){
        Q.push(i);
    }
    QueueReversal(Q);

    for(int i=1;i<=5;i++){
        cout<< Q.front()<<" ";
        Q.pop();

    }

    return 0;


}
