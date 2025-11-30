// Heap/priority queue

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
using namespace std;

int main(){
    /*

    priority_queue<int> pq; // max heap by default

    pq.push(5);
    pq.push(10);
    pq.push(3);

    while(!pq.empty()){ // descending order
        cout<<"top : "<<pq.top()<<endl;
        pq.pop();
    }

    */

    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    pq.push(5);
    pq.push(10);
    pq.push(3);

    while(!pq.empty()){ // ascending order
        cout<<"top : "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}