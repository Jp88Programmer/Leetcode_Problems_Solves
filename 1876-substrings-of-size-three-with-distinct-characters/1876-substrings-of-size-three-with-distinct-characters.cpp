class Solution {
public:
    int countGoodSubstrings(string s) {
        
        map<char,int>m;
        int count = 0;
        if(s.size() < 3)
            return count;
        for(int i = 0; i<3; i++){
            m[s[i]]++;
        }
        
        if(m.size() == 3)
            count++;
        
        for(int i = 3; i<s.size(); i++){
            m[s[i-3]]--;
            if(m[s[i-3]] == 0)
                m.erase(s[i-3]);
            m[s[i]]++;
            if(m.size() == 3)
                count++;
        }
        
        return count;
    }
};