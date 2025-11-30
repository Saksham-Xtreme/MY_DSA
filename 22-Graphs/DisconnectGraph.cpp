#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

class Graph {
    int V;
    list<int>* l;
public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) { // undirected u--v
        l[u].push_back(v);
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

    void bfsHelper(int st, vector<bool> &vis) { // O(V+E) for a component
        queue<int> q;
        q.push(st);
        vis[st] = true;

        while (!q.empty()) {
            int u = q.front(); q.pop();
            cout << u << " ";

            const list<int>& neighbors = l[u]; // avoid copy
            for (int v : neighbors) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void bfs() {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                bfsHelper(i, vis);
                cout << endl; // newline after each connected component
            }
        }
    }

    void dfsHelper(int u, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";

        const list<int>& neighbors = l[u];
        for (int v : neighbors) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {
        if (V == 0) return;
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {        // IMPORTANT: only start DFS from unvisited nodes
                dfsHelper(i, vis);
                cout << endl;    // newline after each connected component
            }
        }
    }

    ~Graph() {
        delete[] l;
    }
};

int main() {
    // Example 1: your original (connected-ish) graph
    Graph graph(7);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);

    cout << "DFS (component-wise):\n";
    graph.dfs();

    cout << "\nBFS (component-wise):\n";
    graph.bfs();

    // Example 2: disconnected graph
    Graph g2(8);
    g2.addEdge(0,1);
    g2.addEdge(1,2);
    // component 0-1-2
    g2.addEdge(3,4);
    // component 3-4
    // nodes 5,6,7 are isolated

    cout << "\n--- Disconnected graph ---\n";
    cout << "DFS:\n";
    g2.dfs();   // will print each component on its own line

    cout << "BFS:\n";
    g2.bfs();

    return 0;
}
