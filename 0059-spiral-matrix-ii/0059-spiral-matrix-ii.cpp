class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int rowBegin = 0,rowEnd = n - 1,colBegin = 0,colEnd = n - 1;
        int count = 1;
        while(rowBegin <= rowEnd && colBegin <= colEnd){
            for(int i = colBegin ; i<=colEnd ; i++){
                ans[rowBegin][i] = count;
                count++;
            }
            rowBegin++;
            
            for(int i = rowBegin; i<= rowEnd; i++){
                ans[i][colEnd] = count;
                count++;
            }
            colEnd--;
            
            if(rowBegin <= rowEnd){
                for(int i = colEnd; i>= colBegin ; i--){
                    ans[rowEnd][i] = count;
                    count++;
                }
            }
            rowEnd--;
            if(colBegin <= colEnd){
                for(int i = rowEnd ; i>= rowBegin; i--){
                    ans[i][colBegin] = count;
                    count++;
                }
            }
            colBegin++;
        }
        return ans;
    }
};