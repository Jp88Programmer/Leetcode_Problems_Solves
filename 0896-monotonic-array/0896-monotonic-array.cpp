class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans1 = true,ans2 = true;
        for(int i = 1; i<nums.size(); i++){
            ans1 &= nums[i] <= nums[i-1];
            ans2 &= nums[i] >= nums[i-1];
        }
        //  for(int i = 1; i<nums.size(); i++){
        //     if(nums[i] > nums[i-1]){
        //         ans2 = false;
        //     }
        // }
        return ans1 || ans2;
    }
};