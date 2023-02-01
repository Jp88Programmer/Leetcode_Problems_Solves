//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    
    void dfs(int i,int j,vector<vector<int>>& grid){
        
        if(i < 0 || i >= grid.size() || j  < 0 || j >= grid[i].size() || grid[i][j] == 0)   return ;
        
        if(grid[i][j] == 1){
            grid[i][j] = 2;
            return;
        }
        
        if(grid[i][j] == 2){
            
            dfs(i+1,j,grid);
            dfs(i-1,j,grid);
            dfs(i,j+1,grid);
            dfs(i,j-1,grid);
        }
        
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends