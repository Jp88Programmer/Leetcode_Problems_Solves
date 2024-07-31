class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        long long msum = 0,sum=0;
        
        for(int i = 0; i<k; i++){
            m[nums[i]]++;
            sum += nums[i];
        }
        
        if(m.size() == k)
            msum = max(msum,sum);

        for(int i = k; i<nums.size(); i++){
            m[nums[i-k]]--;
            if(m[nums[i-k]] == 0) m.erase(nums[i-k]);
            sum = sum - nums[i-k] + nums[i];
            m[nums[i]]++;
            if(m.size() == k){
                msum = max(msum,sum);
            }
        }
        return msum;
    }
};