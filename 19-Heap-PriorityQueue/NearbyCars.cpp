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

class Car{
public:
    int idx;
    int distsq;

    Car(int idx, int distsq){
        this->idx=idx;
        this->distsq=distsq;
    }

    bool operator < (const Car &obj) const{
        return this->distsq > obj.distsq;
    }
};


void NC(vector<pair<int, int>> pos ,int K){
    vector<Car> cars;
    for(int i=0;i<pos.size();i++){
        int distsq= (pos[i].first*pos[i].first)+(pos[i].second*pos[i].second);
        cars.push_back(Car(i,distsq));
    }

    priority_queue<Car> pq(cars.begin(),cars.end());

    for(int i=0;i<K;i++){
        cout<<" car num. -"<< pq.top().idx<<endl;
        pq.pop();
    }

}

int main(){
    vector<pair<int , int >>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));

    int K=2;

    NC(pos,K);

    return 0;
}