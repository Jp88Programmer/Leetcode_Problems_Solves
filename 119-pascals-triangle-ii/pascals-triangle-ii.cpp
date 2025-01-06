class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>arr(rowIndex+1,vector<int>(rowIndex+1,0));
        for(int i =0; i<arr.size(); i++){
            arr[i][0] = 1;
        }
        for(int i =1; i<arr.size(); i++){
            for(int j = 1; j<arr[i].size(); j++){
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }   
        return arr[rowIndex];
    }
};