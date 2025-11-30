#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int V;
    list<int>* l;
    bool isUndir;
public:
    Graph(int V, bool isUndir=true) {
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) { // if isUndir==true, treat as undirected; otherwise directed u -> v
        l[u].push_back(v);
        if (isUndir) {
            l[v].push_back(u);
        }
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

    // DFS helper to detect cycle in directed graph using recursion + recursion-path marker
    bool dirCycleHelper(int src, vector<bool> &vis, vector<bool> &recPath) {
        vis[src] = true;
        recPath[src] = true;

        const list<int>& neighbors = l[src];
        for (int v : neighbors) {
            if (!vis[v]) {
                if (dirCycleHelper(v, vis, recPath)) {
                    return true;
                }
            } else {
                if (recPath[v]) {
                    return true;
                }
            }
        }

        recPath[src] = false; // backtrack
        return false;
    }

    // detect cycle in directed graph
    bool isCycleDir() {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dirCycleHelper(i, vis, recPath)) {
                    return true;
                }
            }
        }
        return false;
    }

    ~Graph() {
        delete[] l;
    }
};

int main() {
    // Create a directed graph: pass isUndir=false
    Graph graph(4, false);

    // edges: 1 -> 0, 0 -> 2, 2 -> 3, 3 -> 0
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    // prints 1 if cycle exists, 0 otherwise
    cout << graph.isCycleDir() << endl;
    return 0;
}
