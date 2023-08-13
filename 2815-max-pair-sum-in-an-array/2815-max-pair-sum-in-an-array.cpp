class Solution {
public:
    int maxSum(vector<int>& nums) {
        int res = -1,maxDigit[10]={0};
        
        for(auto num : nums){
            int maxd = 0;
            for(int d = num; d ; d/=10)
                maxd = max(maxd,d%10);
            if(maxDigit[maxd])
                res = max(res,maxDigit[maxd]+num);
            maxDigit[maxd] = max(maxDigit[maxd],num);
        }
        
        return res;
    }
};