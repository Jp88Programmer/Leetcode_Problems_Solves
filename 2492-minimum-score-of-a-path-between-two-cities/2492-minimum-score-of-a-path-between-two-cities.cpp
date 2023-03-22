class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        // int n = roads.size();
        
        vector<vector<pair<int,int>>>gr(n+1);
        
        for(auto r : roads){
            gr[r[0]].push_back({r[1],r[2]});
            gr[r[1]].push_back({r[0],r[2]});
        }
        
        queue<int>q;
        // bool visited[n+1] = {false};
        vector<bool> visited(n+1,false);
        
        q.push(1);
        visited[1] = true;
        int res = INT_MAX;
        while(!q.empty()){
            
            auto vec = q.front();
            q.pop();
            
            for(auto i : gr[vec]){
                
                res = min(res,i.second);
                if(!visited[i.first]){
                    q.push(i.first);
                    visited[i.first] = true;
                }
            }
        }
        
        return res;
    }
};