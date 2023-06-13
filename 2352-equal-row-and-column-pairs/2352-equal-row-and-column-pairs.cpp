class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int c=0;
        map<vector<int>,int>mp;
        vector<int>v;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
            mp[v]++;
            v.clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[j][i]);
            }
            for(auto x:mp){
                if(x.first==v){
                    c+=x.second;
                }
            }
            v.clear();
        }
        return c;
    }
};