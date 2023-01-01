class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        
        int n = m.size();
        
        for(int i = 1; i<n; i++){
            for(int j = 0 ; j < m[0].size(); j++){
                m[i][j] += min({m[i-1][max(0,j-1)],m[i-1][j],m[i-1][min((int)m[0].size()-1,j+1)]}); 
            }
        }
        
        int minele = *min_element(m[n-1].begin(),m[n-1].end());
        return minele;
        
    }
};