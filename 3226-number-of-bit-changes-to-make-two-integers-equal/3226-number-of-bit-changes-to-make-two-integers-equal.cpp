class Solution {
public:
    int minChanges(int n, int k) {
        
        int op = 0;
        
        while(n > 0 || k > 0){
            int bit = n % 2 ;
            int kbit = k % 2; 
            
            if(bit != kbit && bit == 1){
                op++;
            }else if(bit != kbit && bit == 0){
                op = -1;
                break;
            }
            n /= 2;
            k /= 2;
        }
        
        return op;
    }
};