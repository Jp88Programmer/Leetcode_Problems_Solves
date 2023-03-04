#include<string>
class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        sort(s.begin(), s.end());
        int a=0, b=0;
        for(int i=0; i<s.size(); i++) {
            if(i&1) {
                b*=10;
                b+=s[i]-'0';
            }
            else {
                a*=10;
                a+=s[i]-'0';
            }
        }
        return a+b;
    }
};