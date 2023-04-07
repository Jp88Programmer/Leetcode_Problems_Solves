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
    bool dfs(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& visited){
        if(visited[i][j]==1 || grid[i][j] == 1){
            return false;
        }
        
        visited[i][j] = 1;
        bool x,y,z,w;
        if(i>0 && i<m-1 && j>0 && j<n-1 && grid[i][j] == 0){
           x = dfs(i,j+1,m,n,grid,visited);
           y = dfs(i,j-1,m,n,grid,visited);
           z = dfs(i+1,j,m,n,grid,visited);
           w = dfs(i-1,j,m,n,grid,visited);
        }
        return x && y && z && w;
    }
    int closedIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int count = 0;
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(visited[i][j] == 0 && grid[i][j] == 0){
                    if(dfs(i,j,grid,visited))
                    count++;
                }
            }
        }
        return count;
    }
};