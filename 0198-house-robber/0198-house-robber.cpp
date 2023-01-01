class Solution {
public:
    int fun(int i,vector<int>& nums,vector<int>& dp){
        if(i < 0) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(fun(i-2,nums,dp) + nums[i],fun(i-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>dp(n+1,0);
        
        //method1 memorazation 
        // return fun(n-1,nums,dp);
        
        
        //method 2 tabulation 
        /*
        dp[1] = nums[0];
        for(int i = 1; i < n; i++){
            dp[i+1] = max(dp[i],dp[i-1]+nums[i]);
        }
        
        return dp[n];
        */
        
        //method 3 
        int prev1 = 0,prev2 = 0;
        
        for(auto num : nums){
            int tmp = prev1;
            prev1 = max(prev1,prev2 + num);
            prev2 = tmp;
        }
        return prev1;
    }
};