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

class Row{
public:
    int count;
    int idx;

    Row(int count, int idx){
        this->count=count;
        this->idx=idx;

    }

    bool operator < (const Row &obj) const{
        if(this->count==obj.count){
            return this->idx > obj.idx;
        }
        return this->count > obj.count;
    }
};


void weakestSoldier(vector<vector<int>> mtx, int K){
    vector<Row> rows;
    for(int i=0;i<mtx.size();i++){
        int count=0;
        for(int j=0;j<mtx[i].size() && mtx[i]==1;j++){
           count++;
        }

        row.push_back(Row(count, i));
    }

    priority_queue<Row> pq(rows.begin(),rows.end());
    for(int i=0;i<K;i++){
        cout<<"Row -> "<< pq.top().idx<<endl;
        pq.pop();
    }
}

int main(){
    vector<vector<int>> mtx={{1,0,0,0},
                            {1,1,1,1},
                            {1,0,0,0},
                            {1,0,0,0}};
    weakestSoldier(mtx, 2);
    return 0;
}           