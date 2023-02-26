class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int j = nums.size()-1;
        int count = 0;
        
        for(int i = nums.size()/2-1; i>=0;  i--){
            
            if(nums[i]*2 <= nums[j]){
                count+=2;
                j--;
            }
        }
        
        return count;
    }
};