class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int>m;
        int j = 0,count = 0;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
            while(m.size() >= 3){
                m[s[j]]--;
                if(m[s[j]] == 0)
                    m.erase(s[j]);
                j++;
                count += s.size() - i;
            }   
        }
        return count;
    }
};