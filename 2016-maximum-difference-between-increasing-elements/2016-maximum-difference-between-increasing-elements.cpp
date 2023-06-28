class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int min_ele = INT_MAX;
        int diff = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            min_ele = min(nums[i],min_ele);
            diff = max(diff,nums[i]-min_ele);
        }
        
        if(diff <= 0)
            return -1;
        return diff;
    }
};