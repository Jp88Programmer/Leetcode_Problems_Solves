class Solution {
public:
    int binarySearch(vector<int>& nums,int start,int end,int key){
        
        int index = -1 ;
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            
            if(nums[mid] <= key){
                
                end = mid - 1;
            }else{
                
                start = mid + 1;
                if(index == -1 || nums[index] >= nums[mid])
                    index = mid ;
            }
            
        }
        
        return index;
    }
    
    void reverse(vector<int>& nums,int start,int end){
                    
        while(start < end)
            swap(nums[start++],nums[end--]);
        
    }
    
    void nextPermutation(vector<int>& nums) {
        
        int len = nums.size();
        int i = len - 2 ;
        
        while(i >= 0 && nums[i] >= nums[i+1])
            --i;
        
        if(i < 0)
            sort(nums.begin(),nums.end());
            
        else{
            int index = binarySearch(nums,i+1,len-1,nums[i]);
            swap(nums[i],nums[index]);
            reverse(nums,i+1,len-1);
        }
    }
};