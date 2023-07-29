class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int j = 0,res = 0,mul = 1;
        if(k <= 1) return 0;
        for(int i = 0; i<nums.size(); i++){
            mul *= nums[i];
            while(mul >= k){
                mul /= nums[j++];
            }
            res += i - j + 1;
        }
        return res;
    }
};