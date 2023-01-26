class Solution {
public:
    int rot(vector<vector<int>>& g, int i, int j, int d) {
  if (i < 0 || j < 0 || i >= g.size() || j >= g[i].size() || g[i][j] != 1) return 0;
  g[i][j] = d + 3;
  return 1;
}
    int orangesRotting(vector<vector<int>>& g,int fresh = 0,int d = 0) {
        
        /*
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
        */
         for (auto i = 0; i < g.size(); ++i) 
    fresh += count_if(begin(g[i]), end(g[i]), [](int j) { return j == 1; });
  for (auto old_fresh = fresh; fresh > 0; ++d) {
    for (auto i = 0; i < g.size(); ++i)
      for (auto j = 0; j < g[i].size(); ++j)
        if (g[i][j] == d + 2)
          fresh -= rot(g,i+1,j,d) + rot(g,i-1,j,d) + rot(g,i,j+1,d) + rot(g,i,j-1,d);
    if (fresh == exchange(old_fresh, fresh)) return -1;
  }
  return d;

    }
};