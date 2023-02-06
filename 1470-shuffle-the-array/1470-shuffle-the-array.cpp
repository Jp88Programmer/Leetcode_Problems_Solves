class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // method 1
        /*
        int i = 0,j=n;
        vector<int>ans;
        while(i < n && j < nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        
        return ans;
        */
        
        // method 2 
        for(int i = 0 ; i < n ; i++)
            nums[n+i] = nums[i]*10000 + nums[n+i];
        
        for(int i = 0 ; i < n ; i++){
            nums[i*2] = nums[n+i]/10000;
            nums[i*2+1] = nums[n+i]%10000;
        }
        return nums;
    }
};