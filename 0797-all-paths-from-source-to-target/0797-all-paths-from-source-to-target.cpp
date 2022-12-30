class Solution {
public:
    void dfs(vector<vector<int>>& g,int id,vector<int>&ds,vector<vector<int>>&ans,vector<int>&visited){
        
        if(id == g.size()-1){
            ds.push_back(id);
            ans.push_back(ds);
            // ds.pop_back();
            return ;
        }
        ds.push_back(id);
        // visited[id] = 1;
        for(auto adj : g[id]){
            // if(!visited[adj])
                dfs(g,adj,ds,ans,visited);
            ds.pop_back();
        }
        // ds.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>visited(graph.size(),0);
        // ds.push_back(0);
        dfs(graph,0,ds,ans,visited);
        return ans;
    }
};