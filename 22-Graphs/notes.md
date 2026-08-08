# Graphs

## Topic Overview
A Graph is a non-linear data structure consisting of vertices (nodes) and edges connecting them. This comprehensive folder covers graph representations (Adjacency Matrix, Adjacency List), traversals (BFS, DFS), cycle detection in directed/undirected graphs, bipartite graph validation, topological sorting (DFS and Kahn's algorithm), shortest path algorithms (Dijkstra's, Bellman-Ford), Minimum Spanning Tree algorithms (Prim's, Kruskal's), and the Disjoint Set Union (DSU) data structure.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [AllPaths.cpp](./AllPaths.cpp) | Contains implementation code for `AllPaths`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [BellmanFordAlgo.cpp](./BellmanFordAlgo.cpp) | Implements **Bellman-Ford Algorithm** to find shortest paths from a single source to all vertices in a weighted graph. | $O(V \cdot E)$ | $O(V + E)$ |
| [BipartiteGraph.cpp](./BipartiteGraph.cpp) | Checks if a given graph is **Bipartite** (can be colored using 2 colors such that no two adjacent vertices have the same color). | $O(V + E)$ | $O(V)$ |
| [CourseSchedule.cpp](./CourseSchedule.cpp) | Contains implementation code for `CourseSchedule`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [CreateGraphUsingList.cpp](./CreateGraphUsingList.cpp) | Contains implementation code for `CreateGraphUsingList`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [CycleDetectInDirGr.cpp](./CycleDetectInDirGr.cpp) | Contains implementation code for `CycleDetectInDirGr`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [CycleDetectInUndirGr.cpp](./CycleDetectInUndirGr.cpp) | Contains implementation code for `CycleDetectInUndirGr`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [DijkstrasAlgo.cpp](./DijkstrasAlgo.cpp) | Implements **Dijkstra's Algorithm** for the single-source shortest path problem. | $O(E \log V)$ | $O(V + E)$ |
| [DisconnectGraph.cpp](./DisconnectGraph.cpp) | Contains implementation code for `DisconnectGraph`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [KruskalAlgo.cpp](./DisjointSet/KruskalAlgo.cpp) | Implements **Kruskal's Algorithm** to find the Minimum Spanning Tree (MST) of a graph. | $O(E \log E)$ or $O(E \log V)$ | $O(V + E)$ |
| [code.cpp](./DisjointSet/code.cpp) | Contains implementation code for `code`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [HasPath.cpp](./HasPath.cpp) | Contains implementation code for `HasPath`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [MinimumSpanTreeMST.cpp](./MinimumSpanTreeMST.cpp) | Contains implementation code for `MinimumSpanTreeMST`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [TopoSortAndKahnAlgo.cpp](./TopoSortAndKahnAlgo.cpp) | Contains implementation code for `TopoSortAndKahnAlgo`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [basics.cpp](./basics.cpp) | Contains implementation code for `basics`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [AllPaths.cpp](./AllPaths.cpp)
**Description**: Contains implementation code for `AllPaths`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) `
- ` void print() `
- ` void bfs() { // O(V+E) `
- ` void dfsHelper(int u, vector<bool>& vis) `
- ` void dfs() `
- ` void pathHelper(int src, int dest, vector<bool> &vis, string &path) `
- ` void AllPaths(int src, int dest) `

**Algorithm / Logic Walkthrough**:
directed graph

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [BellmanFordAlgo.cpp](./BellmanFordAlgo.cpp)
**Description**: Implements **Bellman-Ford Algorithm** to find shortest paths from a single source to all vertices in a weighted graph.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) `
- ` void print() `
- ` void bellmanFord(vector<vector<Edge>> graph, int V, int src) `

**Algorithm / Logic Walkthrough**:
It relaxes all edges $V-1$ times. On the $V$-th iteration, if any path can be further relaxed, it indicates the presence of a negative weight cycle.

**Complexity Analysis**:
- **Time Complexity**: $O(V \cdot E)$
- **Space Complexity**: $O(V + E)$

---
### [BipartiteGraph.cpp](./BipartiteGraph.cpp)
**Description**: Checks if a given graph is **Bipartite** (can be colored using 2 colors such that no two adjacent vertices have the same color).

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // undirected u--v `
- ` void print() `
- ` void bfs() { // O(V+E) `
- ` void dfsHelper(int u, vector<bool>& vis) `
- ` void dfs() `
- ` bool isBipartite() `

**Algorithm / Logic Walkthrough**:
It colors the graph using BFS or DFS. For each uncolored node, it colors it with color 0, then colors all its neighbors with color 1, and so on. If it finds a neighbor already colored with the same color as the current node, the graph is not bipartite.

**Complexity Analysis**:
- **Time Complexity**: $O(V + E)$
- **Space Complexity**: $O(V)$

---
### [CourseSchedule.cpp](./CourseSchedule.cpp)
**Description**: Contains implementation code for `CourseSchedule`.

**Algorithm / Logic Walkthrough**:
link course schedule 2 -> https://leetcode.com/problems/course-schedule-ii course schedule 1-> https://leetcode.com/problems/course-schedule

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [CreateGraphUsingList.cpp](./CreateGraphUsingList.cpp)
**Description**: Contains implementation code for `CreateGraphUsingList`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // undirected u--v `
- ` void print() `
- ` void bfs() { // O(V+E) `
- ` void dfsHelper(int u, vector<bool>& vis) `
- ` void dfs() `

**Algorithm / Logic Walkthrough**:
optional: destructor to free memory undirected graph graph.print(); // optional: print adjacency list

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [CycleDetectInDirGr.cpp](./CycleDetectInDirGr.cpp)
**Description**: Contains implementation code for `CycleDetectInDirGr`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // if isUndir==true, treat as undirected; otherwise directed u -> v `
- ` void print() `
- ` bool dirCycleHelper(int src, vector<bool> &vis, vector<bool> &recPath) `
- ` bool isCycleDir() `

**Algorithm / Logic Walkthrough**:
DFS helper to detect cycle in directed graph using recursion + recursion-path marker detect cycle in directed graph Create a directed graph: pass isUndir=false edges: 1 -> 0, 0 -> 2, 2 -> 3, 3 -> 0 prints 1 if cycle exists, 0 otherwise

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [CycleDetectInUndirGr.cpp](./CycleDetectInUndirGr.cpp)
**Description**: Contains implementation code for `CycleDetectInUndirGr`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // undirected u--v `
- ` void print() `
- ` bool undirCycleHelp(int src, int par, vector<bool> &vis) `
- ` bool isCycleUndir() `

**Algorithm / Logic Walkthrough**:
undirect graph

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [DijkstrasAlgo.cpp](./DijkstrasAlgo.cpp)
**Description**: Implements **Dijkstra's Algorithm** for the single-source shortest path problem.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) `
- ` void print() `
- ` void topoHelper(int src, vector<bool>& vis, stack<int>& s) `
- ` void topoSort() `
- ` void calcIndegree(vector<int>& indeg) `
- ` void topoSort2() `
- ` void dijkstra(int src, vector<vector<Edge>>& graph, int V) `

**Algorithm / Logic Walkthrough**:
It keeps track of the shortest distance from the source node to all other nodes. It repeatedly selects the unvisited node with the smallest tentative distance (using a min-priority queue) and relaxes all its neighboring edges.

**Complexity Analysis**:
- **Time Complexity**: $O(E \log V)$
- **Space Complexity**: $O(V + E)$

---
### [DisconnectGraph.cpp](./DisconnectGraph.cpp)
**Description**: Contains implementation code for `DisconnectGraph`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // undirected u--v `
- ` void print() `
- ` void bfsHelper(int st, vector<bool> &vis) { // O(V+E) for a component `
- ` void bfs() `
- ` void dfsHelper(int u, vector<bool>& vis) `
- ` void dfs() `

**Algorithm / Logic Walkthrough**:
Example 1: your original (connected-ish) graph Example 2: disconnected graph component 0-1-2 component 3-4 nodes 5,6,7 are isolated

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [KruskalAlgo.cpp](./DisjointSet/KruskalAlgo.cpp)
**Description**: Implements **Kruskal's Algorithm** to find the Minimum Spanning Tree (MST) of a graph.

**Key Functions & Signatures**:
- ` int find(int x) `
- ` void unionByRank(int u, int v) `
- ` void addEdge(int u, int v, int wt) `
- ` void kruskal() `

**Algorithm / Logic Walkthrough**:
It sorts all edges by weight, then iterates through them and adds an edge to the MST if it doesn't form a cycle. A Disjoint Set Union (DSU) structure is used to check for cycles efficiently.

**Complexity Analysis**:
- **Time Complexity**: $O(E \log E)$ or $O(E \log V)$
- **Space Complexity**: $O(V + E)$

---
### [code.cpp](./DisjointSet/code.cpp)
**Description**: Contains implementation code for `code`.

**Key Functions & Signatures**:
- ` int find(int x) `
- ` void unionByRank(int a, int b) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HasPath.cpp](./HasPath.cpp)
**Description**: Contains implementation code for `HasPath`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) { // undirected u--v `
- ` void print() `
- ` void bfs() { // O(V+E) `
- ` void dfsHelper(int u, vector<bool>& vis) `
- ` void dfs() `
- ` bool pathHelp(int src, int dest, vector<bool> &vis){ // DFS O(v+e) `
- ` bool hasPath(int src,int dest) `

**Algorithm / Logic Walkthrough**:
undirected graph

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MinimumSpanTreeMST.cpp](./MinimumSpanTreeMST.cpp)
**Description**: Contains implementation code for `MinimumSpanTreeMST`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v, int wt) `
- ` void print() `
- ` void primsAlgo(int src) `

**Algorithm / Logic Walkthrough**:
Min-heap: (weight, node) NO !mst[v] check (as you requested) ================= GRAPH CLASS (TOPO SORT) =================

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [TopoSortAndKahnAlgo.cpp](./TopoSortAndKahnAlgo.cpp)
**Description**: Contains implementation code for `TopoSortAndKahnAlgo`.

**Key Functions & Signatures**:
- ` void addEdge(int u, int v) `
- ` void print() `
- ` void topoHelper(int src, vector<bool> &vis,  stack<int> &s) `
- ` void topoSort() `
- ` void calcIndegree(vector<int> &indeg) `
- ` void topoSort2() `

**Algorithm / Logic Walkthrough**:
kahn's Algo 0 indeg nodes -> start point DAG

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [basics.cpp](./basics.cpp)
**Description**: Contains implementation code for `basics`.

**Key Functions & Signatures**:
- ` bool dfs(int node, int dest, vector<vector<int>>& adj, `
- ` vector<int> getPath(int V, vector<vector<int>>& adj, int src, int dest) `

**Algorithm / Logic Walkthrough**:
A network of interconnected nodes is called a **graph**. Each node (or point) in the graph is known as a **vertex**. The connections between vertices are called **edges**. A tree is a special type of graph that has a hierarchical structure, meaning it has a parent-child relationship between nodes. - It has no cycles (no circular connections).

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **BFS & DFS**: Standard traversals running in $O(V + E)$ time.
- **Dijkstra's Algorithm**: Single-source shortest path algorithm using a min-priority queue. Works on positive weights. Time complexity is $O(E \log V)$.
- **Bellman-Ford Algorithm**: Works on negative edge weights. Can detect negative cycles. Runs in $O(V \cdot E)$ time.
- **Kruskal's & Prim's**: Both find MST in $O(E \log V)$ or $O(E \log E)$ time. Kruskal's uses DSU to check for cycles by sorting edges.