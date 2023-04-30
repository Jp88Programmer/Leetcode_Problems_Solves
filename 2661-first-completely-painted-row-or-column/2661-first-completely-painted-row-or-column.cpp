class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int m = mat.size(); 
        int n = mat[0].size(); 
        vector<int>row(m,0);
        vector<int>col(n,0);
        
        unordered_map<int,pair<int,int>>map;
        
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[i].size(); j++){
                map[mat[i][j]] = {i,j};
            }
        }
        for(int i = 0; i<arr.size(); i++){
            
            auto p = map[arr[i]];
            row[p.first]++;
            col[p.second]++;
            if(row[p.first] == n)
                return i;
            if(col[p.second] == m)
                return i;
        }
        
        return 0;
    }
};