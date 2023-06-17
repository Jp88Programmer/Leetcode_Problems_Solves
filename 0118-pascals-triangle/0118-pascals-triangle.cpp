class Solution {
public:
    vector<vector<int>> generate(int rowIndex) {
        
       vector<vector<int>>arr(rowIndex,vector<int>(rowIndex,0));
        vector<vector<int>>ans;
        for(int i =0; i<arr.size(); i++){
            arr[i][0] = 1;
        }
        ans.push_back({1});
        for(int i =1; i<arr.size(); i++){
            for(int j = 1; j<arr[i].size(); j++){
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            vector<int>v;
             for(int j = 0; j<arr[i].size(); j++){
                   if(arr[i][j] != 0)
                       v.push_back(arr[i][j]);
            }
            ans.push_back(v);
        }   
        return ans;
    }
};