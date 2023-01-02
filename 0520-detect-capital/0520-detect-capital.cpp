class Solution {
public:
    bool detectCapitalUse(string str) {
        
        int count = 0;
        bool st = false;
        if(isupper(str[0])) {
            count++;
            st = true;
        }
        for(int i =1; i<str.size(); i++){
            if(isupper(str[i])) count++;
        }

        if((count == 1 && st) || count == 0 || count == str.size()) return true;

        return false;
    }
};