class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            int one = n & 1;
            if(one)
                count++;
            n >>= 1;
        }
        return count;
    }
};