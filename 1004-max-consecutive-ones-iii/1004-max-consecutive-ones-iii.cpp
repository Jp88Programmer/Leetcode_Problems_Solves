class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        //method1 
        /*
        int s = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i] == 0) count++;
            if(count > k){
                if(nums[s] == 0)
                    count--;
                s++;
            }
            
        }
        return n - s;
        */
        
        //method2
        /*
        int j =0;
        int i = 0;
        for(j = 0; j<nums.size(); ++j){
            if(nums[j] == 0) k--;
            if(k<0 && nums[i++] == 0) k++;
        }
        return j - i; 
        */
        
        //method3
        int s = -1;
        int count = 0;
        int ans =0;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i] == 0) count++;
            while(count > k){
                // count--;
                s++;
                if(nums[s] == 0)  
                    // s++;
                    count--;
                // s++;
            }
            int len = i - s;
            if(len > ans)
                ans = len;
            
        }
        return ans;
        
    }
};