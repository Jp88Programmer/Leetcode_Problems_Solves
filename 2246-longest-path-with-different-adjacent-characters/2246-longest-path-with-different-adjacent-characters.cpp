class Solution {
public:
    vector<int>dist;
    int ans = 1;
    void dfs(vector<vector<int>>&tree,string &str,int id){
        
        
        // visited[id] = true;
        dist[id] = 1;
        for(auto child : tree[id]){
            
            dfs(tree,str,child);
            
            if(str[id] != str[child]){
                ans = max(ans,dist[id]+dist[child]);
                dist[id] = max(dist[id],dist[child]+1);
            }
            // if(!visited[child]){
            //     if(str[id] != str[child]){
            //         dfs(tree,str,child,visited,len+1);
            //     }
            // }
        }
        
        // return len ;
    }
    int longestPath(vector<int>& parent, string s) {
        
        int n = parent.size();
        dist.resize(n);
        vector<vector<int>>tree(n);
        vector<int>visited(n,false);
        for(int i = 1; i<n; i++){
            tree[parent[i]].push_back(i);
            // tree[i].push_back(parent[i]);
        }
        
        // int ans = 0;
        // for(int i = 0; i<n; i++){
        dfs(tree,s,0);
            // ans = max(ans,);
        // }
        
        return ans;
        
        
        
    }
};