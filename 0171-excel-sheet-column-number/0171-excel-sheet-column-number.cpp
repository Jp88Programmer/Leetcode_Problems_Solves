class Solution {
public:
    int titleToNumber(string c) {
        long long num = 0;
        long long var = 1;
        for(int i = c.size()-1; i>=0; i--){
            num = (c[i]-'A' + 1)*var + num ;
            var *= 26;
        }
        return (int)num;
    }
};