class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        
        int ans = 1,prevPair=0,currentPair = 0;
        for(int i = 1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                if(currentPair)
                    prevPair = currentPair;
                currentPair = i;
            }
            ans = max(ans,i - prevPair + 1);
        }
        return ans;
    }
};