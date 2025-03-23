class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int pn[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        unordered_set<int>s;

        for(int num:nums){
            for(int p : pn){
                if(num % p == 0){
                    s.insert(p);
                    while(num % p == 0)
                        num /= p;
                }
            }
            if(num != 1)
                s.insert(num);
        }

        return s.size();
    }
};