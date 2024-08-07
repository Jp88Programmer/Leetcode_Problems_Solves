class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        int sum = 0,maxSum = 0;
        int n = cp.size(); 
        for(int i = 0; i<n; i++){
            sum += cp[i];
        }
        
        int sum1 = 0;
        for(int i = 0; i<n-k; i++){
            sum1 += cp[i];
        }
        
        maxSum = max(maxSum,sum-sum1);
        int j = 0;
        for(int i = n-k; i<n; i++){
            sum1 = sum1 + cp[i] - cp[j++];
            maxSum = max(maxSum,sum-sum1);
        }
        return maxSum;
    }
};