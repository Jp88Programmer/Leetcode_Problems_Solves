class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        if(numOnes > k){
            return k;
        }else if(numOnes + numZeros >= k){
            return numOnes;
        }else if(numOnes + numZeros + numNegOnes >= k){
            int num = k - (numOnes + numZeros);
            return numOnes - num;
        }
        
        return 0;
        
    }
};