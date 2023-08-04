 #include<algorithm>
class Solution {
public:
   

    bool wordBreak(string s, vector<string>& v) {
       
        unordered_set<string>se(v.begin(),v.end());
        
        int n = s.size();
        
        bool dp[n+1];
        
        memset(dp,0,sizeof(dp));
        
        dp[0] = 1 ;
        for(int i = 0 ; i < n ; i++){
            
            string curr ;
            
            for(int j = i ; j < n ; j++){
                
                curr.push_back(s[j]);
                
                if(se.count(curr) && dp[i])
                    dp[j+1] = 1 ;
            }
        }
        
        return dp[n];
    }
};