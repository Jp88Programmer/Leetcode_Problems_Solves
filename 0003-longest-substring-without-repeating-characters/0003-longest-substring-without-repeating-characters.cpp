class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int j = 0,len = 0,maxlen = 0;
        unordered_map<char,int>m;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
            len++;
            while(m[s[i]] > 1){
                m[s[j]] = m[s[j]] == 0 ? 0 : m[s[j]] - 1;
                j++;
                len--;
            }
            maxlen = max(len,maxlen);
        }
        return maxlen;
    }
};