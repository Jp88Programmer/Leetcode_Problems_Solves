//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int src,vector<int> adj[],vector<int>&v){
        v[src] = 1;
        
        queue<pair<int,int>>q;
        
        q.push({src,-1});
        
        while(!q.empty()){
            int node = q.front().first;
            int p = q.front().second;
            q.pop();
            for(auto a : adj[node]){
                if(v[a]==0){
                    v[a] = 1;
                    q.push({a,node});
                }else if(p != a){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>v(V,0);
        
        for(int i = 0; i<V; i++){
            if(v[i]==0){
                if(bfs(i,adj,v))
                    return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends