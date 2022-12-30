class Solution {
public:
    void dfs(vector<vector<int>>& g,int id,vector<int>&ds,vector<vector<int>>&ans){
        
        if(id == g.size()-1){
            ds.push_back(id);
            ans.push_back(ds);
            return ;
        }
        ds.push_back(id);
        for(auto adj : g[id]){
                dfs(g,adj,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        dfs(graph,0,ds,ans);
        return ans;
    }
};