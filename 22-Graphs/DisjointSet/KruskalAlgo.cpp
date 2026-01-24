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

class Edge{
public: 
    int u;
    int v;
    int wt;

    Edge(int u, int v, int wt){
        this->u=u;
        this->v=v;
        this->wt=wt;
    }
};

class Graph{
public:
    vector<Edge> edges;
    int V;
    vector<int> par;
    vector<int> rank;


    Graph(int V){
        this->V=V;

        for(int i=0;i<V;i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x){
        if(par[x] == x){
            return x;
        }

        return find(par[x]);

    }

    void unionByRank(int u, int v){
        int parA = find(u);
        int parB = find(v);


        if(rank[parA] == rank[parB]){
            par[parB] = parA;
            rank[parA]++;
        }  else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        } else{
            par[parA] = parB;
        }


    }

    void addEdge(int u, int v, int wt){
        edges.push_back(Edge(u, v, wt));
    }


    void kruskal() {

        // sort edges by weight
        sort(edges.begin(), edges.end(),
             [](Edge &a, Edge &b) {
                 return a.wt < b.wt;
             });

        int mstCost = 0;
        int count = 0;

        for (Edge e : edges) {

            int parA = find(e.u);
            int parB = find(e.v);

            if (parA != parB) {
                unionByRank(e.u, e.v);
                mstCost += e.wt;
                count++;

                cout << e.u << " - " << e.v
                     << " (wt = " << e.wt << ")\n";
            }

            if (count == V - 1)
                break;
        }

        cout << "Total MST cost = " << mstCost << endl;
    }
};


int main() {

    Graph graph(4);

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    graph.kruskal();

    return 0;
}