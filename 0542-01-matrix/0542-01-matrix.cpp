class Solution {
private : 
    bool isValid(int i,int j,int m,int n){
        if(i>=0 && i <m && j >= 0 && j < n)
            return true;
        return false;
    }
    
    int dfs(int i,int j,vector<vector<int>>&mat,vector<vector<bool>>&visited,int dist){
        
        int m = mat.size();
        int n = mat[0].size();
        
        if(mat[i][j] == 0){
            return dist;
            
        }
        
        int val1=INT_MAX;
        int val2=INT_MAX;
        int val3=INT_MAX;
        int val4=INT_MAX;
        
         
        if(mat[i][j] == 1 && !visited[i][j]){
            
            if(isValid(i-1,j,m,n))
                val1 = dfs(i-1,j,mat,visited,dist+1);
            
            if(isValid(i-1,j,m,n))
                val2 = dfs(i+1,j,mat,visited,dist+1);
            
            if(isValid(i-1,j,m,n))
                val3 = dfs(i,j-1,mat,visited,dist+1);
            
            if(isValid(i-1,j,m,n))
                val4 = dfs(i,j+1,mat,visited,dist+1);
        }
        
        return min({val1,val2,val3,val4});
    }
    
//     void bfs(vector<vector<int>>& mat){
        
//     }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
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
                    
                    if(mat[i][j] == 0)
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
        
        while(!q.empty()){
            
            auto x = q.front().first.first;
            auto y = q.front().first.second;
            auto dist = q.front().second;
            cout << dist << endl;
            ans[x][y] = dist;
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
        
        return ans;
    }
};