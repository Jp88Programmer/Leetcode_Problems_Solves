class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>m;
        int sum = 0;
        m[sum] = 1;
        int res = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            if(m[sum - k]>0){
                res += m[sum - k];
            }
            m[sum]++;
        }
        return res;
    }
};