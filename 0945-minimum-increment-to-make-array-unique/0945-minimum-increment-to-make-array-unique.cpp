class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int pre = nums[0],res = 0;
        for(int i = 1; i<nums.size(); i++){
           pre = max(pre + 1,nums[i]);
           res += pre - nums[i];
        }
        return res;
    }
};