class Solution {
public:
    int dfs(int row,int col,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        int count = 0;
        if(col > n || col < 0 || row > m || row < 0)
            return 0;
        if(row - 1 >= 0 && col + 1 < n && (grid[row][col] < grid[row-1][col+1]) ){
            if(dp[row-1][col+1] != 0)
                count = max(count,dp[row-1][col+1]);
            else
                count = max(count, dfs(row-1,col+1,m,n,grid,dp) + 1);
        }
           
        
         if(col + 1 < n && (grid[row][col] < grid[row][col+1]) ){
              if(dp[row][col+1] != 0)
                count = max(count,dp[row][col+1]);
            else
                count = max(count, dfs(row,col+1,m,n,grid,dp) + 1);
         }
            
        
        if(row + 1 < m && col + 1 < n && (grid[row][col] < grid[row+1][col+1]) ){
             if(dp[row+1][col+1] != 0)
                count = max(count,dp[row+1][col+1]);
            else
                count = max(count, dfs(row+1,col+1,m,n,grid,dp) + 1);
        }
        
        return dp[row][col] = count;
    }
    int maxMoves(vector<vector<int>>& grid) {
        
        int minnum = INT_MAX;
        int minIndex = 0;
        int m = grid.size(); 
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int count = 0;
        int res = 0;
        for(int  i = 0; i<grid.size(); i++){
            // if(minnum > grid[i][0]){
            //     minnum = grid[i][0];
            //     minIndex = i;
            // }
           count =  dfs(i,0,m,n,grid,dp);
            res = max(res,count);
        }
        
        // cout << minnum << endl;
        return res;
        
        
    }
};