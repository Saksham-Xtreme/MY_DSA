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
            list<int> neighbors = l[u];
            cout << u << " : ";
            for (int v : neighbors) {
                cout << v << " ";
            }
            cout << endl;
        }
    }

    void bfs() { // O(V+E)
        if (V == 0) return;
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;

        while (!q.empty()) {
            int u = q.front(); q.pop();
            cout << u << " ";

            list<int> neighbors = l[u]; // u--v
            for (int v : neighbors) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int u, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";

        list<int> neighbors = l[u];
        for (int v : neighbors) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {
        if (V == 0) return;
        vector<bool> vis(V, false);
        const int start = 0; // change start vertex here if you want
        dfsHelper(start, vis);
        cout << endl;
    }

    bool pathHelp(int src, int dest, vector<bool> &vis){ // DFS O(v+e)
        if(src==dest){
            return true;
        }

        vis[src]=true;
        list<int> neighbors=l[src];
        for(int v:neighbors){
            if(!vis[v]){
                if(pathHelp(v,dest,vis)){
                    return true;
                }
            }
        }

        return false;
    }

    bool hasPath(int src,int dest){
        vector<bool> vis(V, false);
        return pathHelp(src, dest, vis);
    }


};
int main() {
    Graph graph(7);
    // undirected graph
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);

    cout<<graph.hasPath(5,6)<<endl;

    return 0;
}
