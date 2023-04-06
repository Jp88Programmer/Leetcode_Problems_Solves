class Solution {
public:
      bool isvalid(int x, int y, int m, int n, vector <vector <int>>&grid, vector <vector <int>>&visited){
        if(visited[x][y] or grid[x][y]) return false;
        return true;
    }
    bool dfs(int x, int y, vector <vector <int>>&grid, vector <vector <int>>&visited){
        if(!isvalid(x,y,grid.size(),grid[0].size(),grid,visited)) return true;
        
        if(x==grid.size()-1 or x==0 or y==grid[0].size()-1 or y==0) return false;
        
        visited[x][y] = 1;
        
        bool left = dfs(x,y-1,grid,visited);
        bool right = dfs(x,y+1,grid,visited);
        bool up = dfs(x-1,y,grid,visited);
        bool down = dfs(x+1,y,grid,visited);
        
        return left and right and up and down;
    }
    void dfs(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& visited){
        if(visited[i][j]==1 || grid[i][j] == 1){
            return;
        }
        
        visited[i][j] = 1;
        if(i>0 && i<m-1 && j>0 && j<n-1 && grid[i][j] == 0){
            dfs(i,j+1,m,n,grid,visited);
            dfs(i,j-1,m,n,grid,visited);
            dfs(i+1,j,m,n,grid,visited);
            dfs(i-1,j,m,n,grid,visited);
        }
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int count = 0;
        
        
//         for(int i = 0; i<m; i++){
//             for(int j = 0; j<n; j++){
//                 if(i == 0|| i == m-1 || j == 0 || j == n-1){
//                     dfs(i,j,m,n,grid,visited);
//                     // count++;
//                 }
//             }
//         }
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(visited[i][j] == 0 && grid[i][j] == 0){
                    if(dfs(i,j,grid,visited))
                    count++;
                    // dfs(i,j,grid,visited);
                }
            }
        }
        return count;
    }
};