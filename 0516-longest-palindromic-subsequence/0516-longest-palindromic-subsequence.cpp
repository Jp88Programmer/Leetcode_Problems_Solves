class Solution {
public:
    
    bool isPalindrome(string s){
        
        for(int i = 0 ; i <= s.size() / 2 ; i++){
            
            if(s[i] != s[s.size() - 1 - i])
                return false;
        }
        
        return true;
    }
    
      int longestCommonSubsequence(string text1, string text2) {
        
        
        int n = text1.size();
        
        int m = text2.size();
        
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        vector<int>prev(m+1,0),curr(m+1,0);
        
        
//         for(int i = 0 ; i <= n ; i++)
//             dp[i][0] = 0 ;
        
        for(int i = 0 ; i <= m ; i++)
            prev[i] = 0 ;
        
        
        for(int i = 1 ; i <= n ; i++){
           
            for(int j = 1 ; j <= m ; j++){
                
                if(text1[i-1] == text2[j-1])
                    curr[j] = 1 + prev[j-1];
                else
                    curr[j] = max(prev[j],curr[j-1]);
            }
            
            prev = curr;
        }
        
        return prev[m];
    }
    int longestPalindromeSubseq(string s) {
      
        string rev = s ;
        
        reverse(rev.begin(),rev.end());
        
        return longestCommonSubsequence(s,rev);
        
    }
};