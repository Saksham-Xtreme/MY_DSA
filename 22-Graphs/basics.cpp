// A network of interconnected nodes is called a **graph**.
// Each node (or point) in the graph is known as a **vertex**.
// The connections between vertices are called **edges**.

/*
 A tree is a special type of graph that has a hierarchical structure,
 meaning it has a parent-child relationship between nodes.
 - It has no cycles (no circular connections).
 - There is exactly one path between any two nodes.
 - It has one root node and all other nodes are connected as descendants.

 A **graph**, on the other hand, is more general:
 - Nodes can have multiple neighbors.
 - It can contain cycles (loops).
 - It doesn’t follow a strict parent-child structure.
 - Can be directed or undirected.
*/

/*
 Summary:
 - Tree ⊂ Graph (Every tree is a type of graph)
 - Graphs can represent more complex relationships (like social networks, maps, etc.)
 - Trees are mainly used for hierarchical data (like file systems, family trees, etc.)
*/

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

class Solution {
public:
    bool dfs(int node, int dest, vector<vector<int>>& adj,
             vector<bool>& vis, vector<int>& parent) {
        
        vis[node] = true;

        if (node == dest) return true;

        for (int neigh : adj[node]) {
            if (!vis[neigh]) {
                parent[neigh] = node;

                if (dfs(neigh, dest, adj, vis, parent))
                    return true;
            }
        }

        return false;
    }

    vector<int> getPath(int V, vector<vector<int>>& adj, int src, int dest) {
        vector<bool> vis(V, false);
        vector<int> parent(V, -1);

        bool found = dfs(src, dest, adj, vis, parent);

        vector<int> path;
        if (!found) return path;

        int curr = dest;
        while (curr != -1) {
            path.push_back(curr);
            curr = parent[curr];
        }

        reverse(path.begin(), path.end());
        return path;
    }
};

int main() {
    int V = 5; 
    vector<vector<int>> adj(V);

    
    adj[0] = {1};
    adj[1] = {0, 2, 3};
    adj[2] = {1};
    adj[3] = {1, 4};
    adj[4] = {3};

    int src = 0, dest = 4;

    Solution obj;
    vector<int> path = obj.getPath(V, adj, src, dest);

    if (path.empty()) {
        cout << "No path exists\n";
    } else {
        cout << "Path: ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}