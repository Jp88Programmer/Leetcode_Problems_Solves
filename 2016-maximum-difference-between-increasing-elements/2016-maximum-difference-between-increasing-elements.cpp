class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
       int lsf = INT_MAX,pst = 0,ans = -1;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < lsf){
                lsf = nums[i];
            }
            pst = nums[i] - lsf;
            
            if(ans < pst && pst != 0){
                ans = pst;
            }
        }
        return ans;
    }
};