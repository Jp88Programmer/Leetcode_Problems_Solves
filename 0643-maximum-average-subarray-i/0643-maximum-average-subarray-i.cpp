class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int avg = 0,sum = 0,n = nums.size(); 
        double ans = INT_MIN;
        for(int i = 0; i<k; i++){
            sum += nums[i];
        }
        ans = max(ans,(sum * 1e5) / (k * 1e5));
        int j = 0;
        for(int i = k; i<n; i++){
            sum = sum + nums[i] - nums[j++];
            ans = max(ans,(sum * 1e5) / (k * 1e5)); 
        }
        return ans;
    }
};