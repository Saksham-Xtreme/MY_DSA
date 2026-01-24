#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <climits>
using namespace std;

/* ================= EDGE CLASS ================= */
class Edge {
public:
    int v;
    int wt;

    Edge(int v, int wt) {
        this->v = v;
        this->wt = wt;
    }
};

/* ================= GRAPH CLASS (TOPO SORT) ================= */
class Graph {
    int V;
    bool isUndir;
    list<int>* l;

public:
    Graph(int V, bool isUndir = true) {
        this->V = V;
        this->isUndir = isUndir;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        if (isUndir)
            l[v].push_back(u);
    }

    void print() {
        for (int u = 0; u < V; u++) {
            cout << u << " : ";
            for (int v : l[u]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }

   
    
};


/* ========== BELLMAN FORD ALGO ================*/

void bellmanFord(vector<vector<Edge>> graph, int V, int src){
    vector<int> dist(V, INT_MAX);
    dist[src]=0;

    for(int i=0; i<V-1; i++){
        for(int u=0;u<V;u++){
            for(Edge e : graph[u]){
                if(dist[e.v] > dist[u] + e.wt){
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    for(int i=0; i<V;i++){
        cout<< dist[i] << " ";
    }

    cout<< endl;
}



/* ================= MAIN ================= */
int main() {
    int V = 5;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, -4));
   
    graph[2].push_back(Edge(3, 2));

    graph[3].push_back(Edge(4, 4));

    graph[4].push_back(Edge(1, -1));
   

    bellmanFord(graph, V, 0);

    return 0;
}
