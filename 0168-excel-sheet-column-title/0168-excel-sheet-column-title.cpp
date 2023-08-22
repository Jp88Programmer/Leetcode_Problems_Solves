class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string str = "";
        int num = columnNumber;
        
        while(num){
            num -= 1;
            int r = num % 26;
            str = (char)(r + 65) + str;
            num /= 26;
        }
        return str;
    }
};