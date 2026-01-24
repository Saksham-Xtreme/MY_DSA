
    void primsAlgo(int src) {

        // Min-heap: (weight, node)
        priority_queue<pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>> pq;
    
        vector<bool> mst(V, false);
    
        pq.push({0, src});
    
        int ans = 0;
    
        while (pq.size() > 0 ) {
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
            if(!mst[u]){
                mst[u] = true;
                ans += wt;
                list<pair<int,int>> neighbors = l[u];
                for(pair<int, int> n : neighbors){
                    int v = n.first;
                    int edgeWt = n.second;
                    pq.push(make_pair(edgeWt , v));
                }

            }
        }
    
        cout << "Total cost of MST = " << ans << endl;
    }
    