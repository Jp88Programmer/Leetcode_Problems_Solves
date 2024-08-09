class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       
        vector<int>fr1(26),fr2(26);
        vector<int>ans;
        int m = s.size(),n = p.size();
        
        if(m < n) return ans;
        
        for(auto i : p){
            fr1[i - 'a']++;
        }
        
        for(int i = 0; i<n; i++){
            fr2[s[i] - 'a']++;
        }
        if(fr1 == fr2)
            ans.push_back(0);
        
        for(int i = n; i<m; i++){
            fr2[s[i - n] - 'a' ]--;
            fr2[s[i] - 'a']++;
            if(fr1 == fr2)
                ans.push_back(i-n+1);
        }
        return ans;
    }
};