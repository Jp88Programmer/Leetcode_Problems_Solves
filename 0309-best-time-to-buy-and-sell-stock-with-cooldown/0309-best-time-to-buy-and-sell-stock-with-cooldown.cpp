#define vi vector<int>
#define vii vector<vector<int>>
class Solution {
public:
    //Recursion with memerozation 
    int f(int id,int buy,vi &p,vii &dp){
        
        if(id >= p.size()) return 0;
        if(dp[id][buy] != -1) dp[id][buy];
        
        if(buy == 1){
            return dp[id][buy] = max(-p[id]+f(id+1,0,p,dp),0+f(id+1,1,p,dp));
        }
        
        return dp[id][buy] = max(p[id]+f(id+2,1,p,dp),0+f(id+1,0,p,dp));
    }
    int maxProfit(vector<int>& p) {
        
        
        int n = p.size();
        vii dp(n+2,vi(2,0));
        
        //Tabulation Method 
        for(int i=n-1; i>=0; i--){
            
            for(int buy = 0; buy<=1; buy++){
                
                if(buy){
                    dp[i][buy] = max(-p[i]+dp[i+1][0],dp[i+1][1]);
                }else{
                    dp[i][buy] = max(p[i]+dp[i+2][1],dp[i+1][0]);
                }
                
            }
        }
        
        return dp[0][1];
        
        
        // return f(0,1,prices,dp);
        
        
        /*
         int p1 = 0, p2 = 0;
        for(int i=1; i<prices.size(); i++){
            int p1Copy = p1;
            p1 = max(p1 + prices[i] - prices[i-1], p2);
            p2 = max(p1Copy, p2);
        }
        return max(p1, p2);
        */
        
    }
};