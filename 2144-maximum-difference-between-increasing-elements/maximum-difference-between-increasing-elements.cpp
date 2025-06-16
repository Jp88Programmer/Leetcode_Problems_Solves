class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
       int ans = -1,m = nums[0];
        for(int i = 1; i<nums.size(); ++i){
            if(nums[i] > m){
                ans = max(ans,nums[i] - m);
            }
            m = min(m,nums[i]);
        }
        
        return ans;
       
    }
};