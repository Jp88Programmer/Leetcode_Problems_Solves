class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int sum = 0,res = 0;
        m[sum] = 1;
        for(auto i : nums){
            sum += i;
            if(m[sum - k]){
                res += m[sum - k];
            }
            m[sum]++;
        }
        return res;
    }
};