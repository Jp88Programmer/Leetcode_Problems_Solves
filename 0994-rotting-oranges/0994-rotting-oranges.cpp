class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ro = 0;
        int fo = 0;
        
        queue<pair<int,int>>q;
        
        for(int i = 0; i<grid.size(); i++){
            
            for(int j = 0;j < grid[i].size();j++){
                
                if(grid[i][j] == 2){
                    // dfs(i,j,grid)
                    q.push({i,j});
                    ro++;
                }
                
                if(grid[i][j] == 1){
                    fo++;
                }
                
            }
        }
        
        if(fo == 0) return 0;
        int t = 0;
        
        while(!q.empty()){
            
            int l = q.size();
            
            for(int k = 0; k < l ; k++){
                pair<int,int>p = q.front();
                int i = p.first;
                int j = p.second;
                q.pop();
                
                if(i-1>=0 && grid[i-1][j] == 1){
                    grid[i-1][j] = 2;
                    q.push({i-1,j});
                    fo--;
                }
                
                if(i+1<n && grid[i+1][j] == 1){
                    grid[i+1][j] = 2;
                    q.push({i+1,j});
                    fo--;
                }
                
                if(j-1>=0 && grid[i][j-1] == 1){
                    grid[i][j-1] = 2;
                    q.push({i,j-1});
                    fo--;
                }
                if(j+1<m && grid[i][j+1] == 1){
                    grid[i][j+1] = 2;
                    q.push({i,j+1});
                    fo--;
                }
            }
            t++;
            if(fo == 0) return t;
        }
        return -1;
    }
};