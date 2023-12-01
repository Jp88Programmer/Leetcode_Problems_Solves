class Solution {
public:
    string con(vector<string>&v){
        string s = "";
        for(auto i : v){
            s += i;
        }
        return s;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        
        string s1 = con(word1);
        string s2 = con(word2);
        
        if(!s1.compare(s2))
            return true;
        return false;
        
    }
};