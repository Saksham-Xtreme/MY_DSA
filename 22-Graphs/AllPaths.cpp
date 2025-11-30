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
        if(isUndir)
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

    void pathHelper(int src, int dest, vector<bool> &vis, string &path){
        if(src==dest){
            cout<<path<<dest<<endl;
            return;
        }

        vis[src]=true;
        path +=to_string(src);

        list<int> neighbours=l[src];
        for(int v : neighbours){
            if(!vis[v]){
                pathHelper(v, dest, vis, path);
            }
        }
        path=path.substr(0,path.size()-1);
        vis[src]=false;

    }

    void AllPaths(int src, int dest){
        vector<bool> vis(V, false);
        string path = "";
        pathHelper(src, dest, vis, path);
    }


};
int main() {
    Graph graph(6, false);
    // directed graph
    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
    

    graph.AllPaths(5,1);

    return 0;
}
