class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX,j = 0,sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            while(sum > target){
                res = min(res,i - j + 1);
                sum -= nums[j++];
            }

            if(sum == target)
                res = min(res,i - j + 1);
        }
        return res == INT_MAX ? 0 : res;
    }
};