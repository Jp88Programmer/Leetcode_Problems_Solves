class Solution {
public:
    long long coloredCells(int n) {
        
        vector<long long >dp(n+1,0);
        
        long long sum = 1,presum = 0;
        long long oddNum = 3;
        if(n == 1) return 1;
        
        for(int i = 2 ; i<=n ; i++){
            presum += oddNum - 2;
            sum += oddNum ;
            oddNum += 2;
            dp[i] = sum + presum ;
        }
        
        return dp[n];
    }
};