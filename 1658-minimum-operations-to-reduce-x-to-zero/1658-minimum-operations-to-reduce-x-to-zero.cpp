class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sumAll = 0,sum = 0,ans = INT_MAX;
        int n = nums.size();
        for(auto n:nums) sumAll += n;
        
        if(sumAll < x)
            return -1;
        
        int j = 0;
        for(int i = 0;i<nums.size(); i++){
            sum += nums[i];
            while(sumAll - sum < x)
                sum -= nums[j++];

            if((sumAll - sum )== x)
                ans = min(ans,n - (i - j + 1));
        }
        
        if(ans == INT_MAX) return -1;
        return ans;
        
    }
};