class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        /*
        map<int,int>m;
        
        int mx = *max_element(nums.begin(),nums.end());
        
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
            // if(m[])
        }
        
        for(int i = 1; i<=mx; i++){
            if(m[i] == 0) return i;
        }
        
        if(mx<=0) return 1;
        
        return mx+1;
        */
        
        
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            while(nums[i] > 0 and nums[i] <= n and nums[i] != nums[nums[i] - 1])
                swap(nums[i],nums[nums[i] - 1]);
        }
        
        for(int i = 0; i<n; i++) if(nums[i] != i+1) return i+1;
        return n+1;
    }
};