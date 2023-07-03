class Solution {
public:
    bool buddyStrings(string s, string g) {
        
        unordered_map<int,int> m1,m2;
        if(s.size() != g.size()) return false;
        if(s == g){
            set<char>se(s.begin(),s.end());
            return se.size() < g.size();
        }
        int i = 0, j = s.size()-1;
        while(i < j && s[i] == g[i])
            i++;
        
        while(i < j && s[j] == g[j])
            j--;
        
        swap(s[i],s[j]);
        
        return s == g;
            
    }
};