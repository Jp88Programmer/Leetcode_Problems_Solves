class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int e = 0,o = nums.size()-1;
        for(int i = 0; i<nums.size() && e < o; i++){
            if(nums[i] % 2==0){
                swap(nums[i],nums[e++]);
            }
        }
        return nums;
    }
};