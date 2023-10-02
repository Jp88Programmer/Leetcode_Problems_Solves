class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>pre(n,0),suff(n,0);
        int m = nums[0];
        for(int i = 1; i<n; i++){
            pre[i] = m;
            m = max(m,nums[i]);
        }
        m = nums[n-1];
        for(int i = n-2; i>=0; i--){
            suff[i] = m;
            m = max(m,nums[i]);
        }
        long long ans = 0;
        for(int i = 0; i<n-1; i++){
            ans = max(ans,1LL*(pre[i]-nums[i])*suff[i]*1LL);
        }
        return ans;
    }
};