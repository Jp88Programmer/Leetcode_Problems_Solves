class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
         if(p%10 != 0){
            int r = p % 10;
            if(r < 5)
                return 100 - (p-r);
            else
                return 100 - (p + 10 - r);
        }
        return 100 - p;
    }
};