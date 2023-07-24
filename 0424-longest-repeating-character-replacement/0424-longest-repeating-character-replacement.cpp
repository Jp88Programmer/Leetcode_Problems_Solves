class Solution {
public:
    char maxfr(map<char,int>&m){
        // char ans = a; 
        int fr = 1;
        for(auto x : m){
            if(fr <= x.second){
                fr = x.second;
            }
        }
        return fr;
    }
    int characterReplacement(string s, int k) {
        map<char,int>m;
        int j = 0;
        int res = 0;
        int maxfr = 1;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
            maxfr = max(maxfr,m[s[i]]);
            int len = i - j + 1;
            if(len - maxfr <= k)
                res = max(res,len);
            
            while(len - maxfr > k){
                m[s[j]] = m[s[j]] == 0 ? 0 : m[s[j]] - 1;
                maxfr = max(maxfr,m[s[j]]);
                j++;
                len = i - j + 1;
            }
            // res = max(res,len);
        }
        return res;
    }
};

