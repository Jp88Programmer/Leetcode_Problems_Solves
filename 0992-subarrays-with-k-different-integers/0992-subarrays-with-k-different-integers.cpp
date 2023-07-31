class Solution {
public:
    int fun(vector<int>&nums,int k){
       int j = 0,count =0; 
        unordered_map<int,int>m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
            while(m.size() > k){
                m[nums[j]]--;
                if(m[nums[j]]==0)
                    m.erase(nums[j]);
                j++;
            }
            count += i - j + 1;
        }
        return count; 
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // int n = nums.size();
        return fun(nums,k) - fun(nums,k-1);
    }
};