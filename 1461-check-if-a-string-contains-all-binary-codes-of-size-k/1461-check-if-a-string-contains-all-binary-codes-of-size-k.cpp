class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        map<string,int>m;
        int j = 0;
        if(s.size() < k)
            return false;
        
        string str = s.substr(0,k);
        m[str]++;
        
        for(int i = 1; i<s.size()-k+1; i++){
            str = s.substr(i,k);
            m[str]++;
        }
        
        if(m.size() == pow(2,k)){
            return true;
        }
        
        return false;
        
        
    }
};