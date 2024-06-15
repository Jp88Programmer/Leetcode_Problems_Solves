class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxOne = 0,maxZero = 0,one = 0,zero=0;
        
        for(auto i : s){
            if(i == '0'){
                one = 0;
                zero++;
            }else{
                zero = 0;
                one++;
            }
            maxOne = max(maxOne,one);
            maxZero = max(maxZero,zero);
        }
        
        return maxOne > maxZero;
    }
};