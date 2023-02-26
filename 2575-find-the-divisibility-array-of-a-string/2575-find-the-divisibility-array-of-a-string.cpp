class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        string str = "";
        vector<int>res(word.size(),0);
        long long num = 0;
        for(int i = 0; i<word.size(); i++){
            // str += word[i];
            num = (num * 10 + (word[i] - '0') ) % m;
            if(num == 0){
                res[i] = 1;
            }
        }
        
        return res;
    }
};