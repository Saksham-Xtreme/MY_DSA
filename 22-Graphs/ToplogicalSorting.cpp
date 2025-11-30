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

    void topoHelper(int src, vector<bool> &vis,  stack<int> &s){
        vis[src]=true;
        list<int> nieghbours=l[src];
        for(int v: nieghbours){
            if(!vis[v]){
                topoHelper(v,vis,s);
            }
        }
        s.push(src);
    }

    void topoSort(){
        vector<bool> vis(V, false);
        stack<int> s;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                topoHelper(i,vis,s);
            }
        }

        while(!s.empty()){
            cout<< s.top()<<endl;
            s.pop();
        }
        cout<<endl;
    }


};
int main() {
    Graph graph(6, false);
    //DAG
    graph.addEdge(2, 3);
    graph.addEdge(3 ,1);

    graph.addEdge(4 ,0);
    graph.addEdge(4, 1);

    graph.addEdge(5 ,0);
    graph.addEdge(5, 2);

    graph.topoSort();
    
    return 0;
}
