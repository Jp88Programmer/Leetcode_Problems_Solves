class Solution {
public:
    int atMost(vector<int>& nums, int goal){
        
        if(goal<0) return 0;
        
        int j = 0,res = 0,sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            
            while(sum > goal){
                sum -= nums[j++];
            }
            
            res += i - j + 1;
        }
        
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        // for(int i = 0; )
        
        return atMost(nums,goal) - atMost(nums,goal-1);
    }
};