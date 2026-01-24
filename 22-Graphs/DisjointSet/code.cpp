#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;

class DisjointSet {
public:
    int n;
    vector<int> par;
    vector<int> rank;

    DisjointSet(int n){
        this->n=n;

        for(int i=0;i<n;i++){
            par.push_back(i);
            rank.push_back(i);
        }
    }

    int find(int x){
        if(par[x] == x){
            return x;
        }

        return find(par[x]);

    }

    void unionByRank(int a, int b){
        int parA = find(a);
        int parB = find(b);


        if(rank[parA] == rank[parB]){
            par[parB] = parA;
            rank[parA]++;
        }  else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        } else{
            par[parA] = parB;
        }


    }


};


int main() {
    DisjointSet dj(6);

    dj.unionByRank(0, 1);
    dj.unionByRank(1, 2);
    dj.unionByRank(3, 4);

    cout << dj.find(2) << endl;
    cout << dj.find(4) << endl;

    return 0;
}