class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int steps = 0,new_value = 0;
        for(int i = 0; i<nums.size(); i++){
           steps += max(new_value-nums[i],0);
            new_value = max(new_value,nums[i]) + 1;
        }
        return steps;
    }
         
    //  sort(A.begin(), A.end());
    //     int res = 0, need = 0;
    //     for (int a: A) {
    //         res += max(need - a, 0);
    //         need = max(a, need)+1;
    //     }
    //     return res;
    //                     r = 0,0,1,2,2,3,4
    // [1,1,2,2,3,7]       n = 0,2,3,4,5,6,
};