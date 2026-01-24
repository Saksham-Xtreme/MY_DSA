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


/* ================= GRAPH CLASS (TOPO SORT) ================= */
class Graph {
    int V;
    bool isUndir;
    list<pair<int,int>> * l;

public:
    Graph(int V, bool isUndir = true) {
        this->V = V;
        this->isUndir = isUndir;
        l = new list<pair<int,int>>[V];
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back(make_pair(v, wt));
        if (isUndir)
            l[v].push_back(make_pair(u, wt));
    }

    void print() {
        for (int u = 0; u < V; u++) {
            cout << u << " : ";
            for (pair<int,int> p : l[u]) {
                cout << "(" << p.first << "," << p.second << ") ";
            }
            cout << endl;
        }
    }
    
    ~Graph() {
        delete[] l;
    }
    
    void primsAlgo(int src) {

        // Min-heap: (weight, node)
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
    
        vector<bool> mst(V, false);
    
        pq.push({0, src});
    
        int ans = 0;
    
        while (pq.size() > 0) {
    
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
    
            if (!mst[u]) {
                mst[u] = true;
                ans += wt;
    
                list<pair<int,int>> neighbors = l[u];
    
                for (pair<int, int> n : neighbors) {
                    int v = n.first;
                    int edgeWt = n.second;
    
                    // NO !mst[v] check (as you requested)
                    pq.push(make_pair(edgeWt, v));
                }
            }
        }
    
        cout << "Total cost of MST = " << ans << endl;
    }
    
    
    
};


int main() {

    Graph graph(4);   // false → undirected graph (important for MST)

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    graph.primsAlgo(0);

    return 0;
}