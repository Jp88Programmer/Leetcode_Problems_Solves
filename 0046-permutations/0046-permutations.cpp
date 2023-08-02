class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        bool f = true;
        while(f){
            f = next_permutation(nums.begin(),nums.end());
            ans.push_back(nums);
        }
        
        return ans; 
    }
};