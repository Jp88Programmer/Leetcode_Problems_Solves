class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        if(i>=0 && i <m && j >= 0 && j < n)
            return true;
        return false;
    }
    
    int maxDistance(vector<vector<int>>& mat) {
        
        
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,-1,0,1};
        
        queue<pair<pair<int,int>,int>>q;
        
        
        for(int i = 0; i < m ; i++){
            
            for(int j = 0; j < n; j++){
 
                // if(mat[i][j] == 1 && !visited[i][j]){
                    
                    /*
                    int minVal = mat[i][j];
                    
                    if(isValid(i-1,j,m,n))
                        minVal = min(minVal,ans[i-1][j]);
                    
                    if(isValid(i,j-1,m,n))
                        minVal = min(minVal,ans[i][j-1]);
                    
                    
                    ans[i][j] = minVal + 1;
                    
                    */
                    
                    if(mat[i][j] == 1)
                    {
                        q.push({{i,j},0});
                        visited[i][j] = 1;
                    }else{
                        visited[i][j] = 0;
                    }
                    
                    // ans[i][j] = dfs(i,j,mat,visited,0);
                // }
            }
        }
        
        if(q.size() == m*n) return -1;
        int res = -1;
        while(!q.empty()){
            
            auto x = q.front().first.first;
            auto y = q.front().first.second;
            auto dist = q.front().second;
            cout << dist << endl;
            // ans[x][y] = dist;
            res = max(res,dist);
            q.pop();
            
            for(int i = 0; i<4; i++){
                int xi = x + dr[i];
                int yi = y + dc[i];
                
                if(isValid(xi,yi,m,n) && visited[xi][yi] == 0){
                    q.push({{xi,yi},dist+1});
                    visited[xi][yi] = 1;
                }
            }
        }
        
        // return ans;
        return res;
        
    }
};