class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1) return nums[0];
        
        int s =0;
        int e = n - 2;
        
        while(s <= e){
            int m = (s + e) >> 1;
            if(nums[m] == nums[m^1])
                s = m + 1;
            else 
                e = m - 1;
        }
        return nums[s];
        
    }
};