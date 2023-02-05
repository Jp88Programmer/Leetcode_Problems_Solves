class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
       
        int left = 1,right = 1e9;
        int n = nums.size();
        
        while(left < right){
            int mid = left + (right - left)/2;
            int take = 0;
            for(int i = 0; i<n; i++){
                
                if(nums[i] <= mid){
                    take++;
                    i++;    
                }
            }
            if(take>=k)
                right = mid;
            else
                left = mid + 1;
        }
        
        return left;
        
    }
};