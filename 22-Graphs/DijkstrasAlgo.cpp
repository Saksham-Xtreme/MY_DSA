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

    /* ---------- DFS TOPO SORT ---------- */
    void topoHelper(int src, vector<bool>& vis, stack<int>& s) {
        vis[src] = true;

        for (int v : l[src]) {
            if (!vis[v]) {
                topoHelper(v, vis, s);
            }
        }
        s.push(src);
    }

    void topoSort() {
        vector<bool> vis(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                topoHelper(i, vis, s);
            }
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    /* ---------- KAHN'S ALGORITHM ---------- */
    void calcIndegree(vector<int>& indeg) {
        for (int u = 0; u < V; u++) {
            for (int v : l[u]) {
                indeg[v]++;
            }
        }
    }

    void topoSort2() {
        vector<int> indeg(V, 0);
        calcIndegree(indeg);

        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            cout << curr << " ";

            for (int v : l[curr]) {
                indeg[v]--;
                if (indeg[v] == 0) {
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};

/* ================= DIJKSTRA ================= */
void dijkstra(int src, vector<vector<Edge>>& graph, int V) {
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Skip outdated distance
        if (currDist > dist[u]) continue;

        for (Edge e : graph[u]) {
            if (dist[e.v] > dist[u] + e.wt) {
                dist[e.v] = dist[u] + e.wt;
                pq.push({dist[e.v], e.v});
            }
        }
    }

    for (int d : dist) {
        cout << d << " ";
    }
    cout << endl;
}

/* ================= MAIN ================= */
int main() {
    int V = 6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));

    cout << "Dijkstra from source 0:" << endl;
    dijkstra(0, graph, V);

    return 0;
}
