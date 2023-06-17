class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
         vector<vector<int>>arr(numRows+1,vector<int>(numRows+1,0));
         vector<vector<int>>ans;
        
        arr[0][0] = 1;
        for(int i =1; i<arr.size(); i++){
            for(int j = 1; j<arr[i].size(); j++){
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            vector<int>v;
             for(int j = 1; j<arr[i].size(); j++){
                   if(arr[i][j] != 0)
                       v.push_back(arr[i][j]);
            }
            ans.push_back(v);
        }   
        return ans;
    }
};