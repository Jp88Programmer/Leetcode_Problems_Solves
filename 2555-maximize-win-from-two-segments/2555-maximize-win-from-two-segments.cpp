class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        
        
        int n = prizePositions.size();
        vector<int>dp(n+1,0);
        int j = 0,res = 0;
        for(int i = 0; i<n; i++){
            while(prizePositions[j] < prizePositions[i] - k)
                ++j;
            dp[i+1] = max(dp[i],i-j+1);
            res = max(res,i-j+1+dp[j]);
        }
        
        return res;
        
    }
};