class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int j = 0,maxfr = 0;
        for(int i =0; i<nums.size(); i++){
            m[nums[i]]++;
            maxfr = max(maxfr,m[nums[i]]);
            if(i - j + 1 - maxfr > k){
                m[nums[j++]]--;
            }
        }
        return maxfr;
    }
};