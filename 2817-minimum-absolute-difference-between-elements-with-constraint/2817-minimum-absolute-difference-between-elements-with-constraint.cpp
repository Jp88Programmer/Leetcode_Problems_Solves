class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        multiset<int>s;
        int res= INT_MAX;
        for(int i = x ; i<nums.size(); i++){
            s.insert(nums[i-x]);
            auto it = s.upper_bound(nums[i]);
            if(it != s.end())
               res = min(res,abs(nums[i]-*it));
            if(prev(it) != s.end())
                res = min(res,abs(nums[i]-*prev(it)));
        }
        return res;
    }
};