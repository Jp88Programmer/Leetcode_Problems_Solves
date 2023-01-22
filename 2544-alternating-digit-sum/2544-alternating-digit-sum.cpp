class Solution {
public:
    int alternateDigitSum(int n) {
        
        string str = to_string(n);
        
        int ans = 0;
        bool sign = false;
        for(auto s : str){
            
            if(sign){
                ans -= s - 48;
                sign = !sign;
            }else{
                ans += s - 48;
                sign = !sign;
            }
        }
        
        return ans;
    }
};