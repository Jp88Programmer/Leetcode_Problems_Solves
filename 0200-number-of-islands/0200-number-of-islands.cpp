class Solution {
private: 
    void dfs(vector<vector<char>>&grid,int i,int j){
        
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0')
            return;
        
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
            dfs(grid,i,j+1);
            dfs(grid,i,j-1);
            dfs(grid,i+1,j);
            dfs(grid,i-1,j);
        }
         
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int cols = grid[0].size();
        int count = 0 ;
        
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j < cols; j++){
                
                if(grid[i][j] == '1'){
                    dfs(grid,i,j);
                    count++;
                }
                
            }
        }
        
        return count ;
    }
};