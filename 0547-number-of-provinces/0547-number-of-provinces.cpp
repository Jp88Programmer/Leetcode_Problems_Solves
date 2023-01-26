class Solution {
public:
    void dfs(int id,vector<vector<int>>&g,vector<int>&v){
        v[id] = 1;
        for(auto adj : g[id]){
            if(!v[adj])
                dfs(adj,g,v);
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {
        
        vector<vector<int>>g(ic.size());
        
        for(int i = 0; i < ic.size(); i++){
            
            for(int j = 0; j < ic.size(); j++){
                
                if(i!=j && ic[i][j] == 1)
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        
        int cnt = 0;
        vector<int>v(ic.size(),0);
        
        for(int i = 0; i<ic.size(); i++){
            if(v[i] == 0){
                dfs(i,g,v);
                cnt++;
            }
        }
        
        return cnt;
    }
};