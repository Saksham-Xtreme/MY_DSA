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

struct ComparePair{
    bool opreator() (pair<string , int> &p1, pair<string , int> &p2){
        return p1.second < p2.second;
    }
};

int main(){
    priority_queue<pair<string, int>, vector<pair<string, int>>,ComparePair> pq;
    pq.push(make_pair("aman", 85));
    pq.push(make_pair("rajiv", 65));
    pq.push(make_pair("Saksham", 95));

    while(!pq.empty()){
        cout<<"Top -> "<< pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
    
}