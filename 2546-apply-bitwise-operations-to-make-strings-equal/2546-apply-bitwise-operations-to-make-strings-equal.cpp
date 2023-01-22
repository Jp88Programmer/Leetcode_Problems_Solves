class Solution {
public:
    bool makeStringsEqual(string s, string target) {
                
        if(s.compare(target) == 0) return true;
        int c1=0,c2=0;
        for(auto i : target) if(i == '1') c1++;
        for(auto i : s) if(i == '1') c2++;
        if(c1 == 0 || c2 == 0) return false;
        return true;     
    }
};