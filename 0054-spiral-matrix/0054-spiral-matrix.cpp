class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n = m.size();
        int col = m[0].size();
        int rowBegin = 0,rowEnd = n - 1,colBegin = 0, colEnd = col - 1;
        vector<int> ans;
        while(rowBegin<= rowEnd && colBegin <= colEnd){
            for(int i = colBegin; i <= colEnd ; i++){
                ans.push_back(m[rowBegin][i]);
            }
            rowBegin++;
            for(int i = rowBegin; i <= rowEnd; i++){
                ans.push_back(m[i][colEnd]);
            }
            colEnd--;
            if(rowBegin<=rowEnd){
                for(int i = colEnd; i >= colBegin ; i--){
                    ans.push_back(m[rowEnd][i]);
                }
            }
            rowEnd--;
            if(colBegin <= colEnd){
                for(int i = rowEnd; i >= rowBegin ; i--){
                    ans.push_back(m[i][colBegin]);
                }
            }
            colBegin++;
        }
        return ans;
    }
};