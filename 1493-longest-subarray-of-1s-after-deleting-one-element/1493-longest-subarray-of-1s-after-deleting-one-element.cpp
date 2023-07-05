class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int prevCnt = 0, cnt = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) cnt++;
            else {
                res = max(res, cnt + prevCnt);
                prevCnt = cnt;
                cnt = 0;
            }
        }
        res = max(res, cnt + prevCnt);
        return res == nums.size() ? res - 1 : res;  
    }
};