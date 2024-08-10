class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>fr1(26),fr2(26);
        int m = s1.size(),n = s2.size();
        
        if(m > n) return false;
        
        for(auto i:s1){
            fr1[i-'a']++;
        }
        
        for(int i = 0; i<m; i++){
            fr2[s2[i]-'a']++;
        }
        
        if(fr1 == fr2)
            return true;
        
        for(int i = m; i<n; i++){
            fr2[s2[i-m]-'a']--;
            fr2[s2[i]-'a']++;
            if(fr1 == fr2)
                return true;
        }
        return false;
    }
};