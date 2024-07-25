class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int sum = 0,ans = 0;
        m[sum] = 1;
        for(auto num : nums){
            sum += num;
            if(m[sum - k] > 0){
                ans += m[sum-k];
            }
            m[sum]++;
        }
        return ans;
    }
};