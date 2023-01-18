class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
         int total = 0, maxSum = INT_MIN, curMax = 0, minSum = INT_MAX, curMin = 0;
    for (int i : nums) {
        curMax = max(curMax + i, i);
        maxSum = max(maxSum, curMax);
        curMin = min(curMin + i, i);
        minSum = min(minSum, curMin);
        total += i;
    }
    return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};