class Solution {
public:
    // vector<int>size;
    void dfs(vector<vector<int>>&tree,vector<int>&visited,string labels,vector<int>&size,int id){
        
        if(id >= tree.size() ){
            // size.push_back(len);
            // size[id]++;
            return ;
        }
        
        visited[id] = true;
        for(auto adj : tree[id]){
            
            if(!visited[adj]){
                if(labels[adj] == labels[id]){
                    size[id]++;
                    dfs(tree,visited,labels,size,adj);
                }
                // else
                //     dfs(tree,visited,labels,size,adj);
            }
        }
    }
    
     int dfs(int node, vector<int> adj[], vector<bool>& vis, char c, string& labels, vector<int>& ans, vector<int>& fre){
        vis[node] = true;
        int prev = fre[labels[node]-'a'];
        fre[labels[node]-'a']++;
        for(auto it: adj[node]){
            if(!vis[it]){
                int cnt1 = dfs(it, adj, vis, labels[node], labels, ans, fre);
                ans[node] += cnt1;
            }
        }
        ans[node] = fre[labels[node]-'a'] - prev;
        return ans[node];
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        /*
        vector<vector<int>>tree(n);
        vector<int>visited(n,false);
        vector<int>size(n,1);
        for(auto ed:edges){
            tree[ed[0]].push_back(ed[1]);
            tree[ed[1]].push_back(ed[0]);
        }
        
        
        for(int i = 0; i<n; i++){
            dfs(tree,visited,labels,size,0);
        }
        
        return size;
        */
        
        vector<int> adj[n];
        vector<bool> vis(n,false);
        vector<int> ans(n,1);
        vector<int> fre(26,0);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int tt = dfs(0, adj, vis, labels[0], labels, ans, fre);
        return ans;
        
        
    }
};