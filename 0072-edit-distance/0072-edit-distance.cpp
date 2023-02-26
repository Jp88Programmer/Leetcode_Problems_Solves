class Solution {
public:
    int minVal(int a,int b,int c){
        
        return min(a,min(b,c));
    }
    int minDistance(string s1, string s2) {
        
        int m = s1.size();
        int n = s2.size();
        
        int dp[2][m+1];
        
        memset(dp,0,sizeof(dp));
        
         for(int i = 0 ; i <= m ; i++){
             
             dp[0][i] = i ;
         }
        
        for(int i = 1 ; i <= n ; i++){
            
            for(int j = 0 ; j <=m ; j++){
                
                if(j == 0)
                    dp[i%2][j] = i;
                
                else if(s1[j-1] == s2[i-1])
                    dp[i % 2][j] = dp[(i-1) % 2][j-1];
                
                else 
                    dp[i%2][j] = 1 + min(dp[(i-1)%2][j],min(dp[i%2][j-1],dp[(i-1)%2][j-1]));
            }
        }
        
        return dp[n%2][m];
        
        
  
    
    }
};