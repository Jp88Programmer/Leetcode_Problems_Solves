class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       int n = s.size();
        string pre = s.substr(0,n-1);
        string post = s.substr(1,n-1);
        string str = post + pre;
        return str.find(s) != string::npos;
    }
};