class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(count ==  0){
                ans = nums[i];
                count++;
            }else if(nums[i] == ans){
                count++;
            }else{
                count--;
            }
        }
        
        int count1 = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == ans){
                count1++;
            }
        }
        
        if(count1 > nums.size()/2)
            return ans;
        else
            return -1;
    }
};