class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int,int>m;
        int l = 0;
        int res = 0;
        int si = m.size();
        for(int i = 0; i< s.size(); i++){

            while(m[s[i]] && l <= i){
                m[s[l]]--;
                if(!m[s[l]]){
                    m.erase(s[l]);
                }
                l++;
            }
            
            if(!m[s[i]]){
                m[s[i]]++;
            }

            res = max(res,i - l + 1);
        }

        return res;
    }
};