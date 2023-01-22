class Solution {
public:
    int fun(int start,int k,vector<int>&nums,vector<int>&dp,vector<vector<int>>&tr){
        
        if(start >= nums.size()) return 0;
        if(dp[start] != -1) return dp[start];
        int minres = INT_MAX;
        
        for(int i = start; i < nums.size(); i++){
            
            int cu = k + tr[start][i];
            int necu = fun(i+1,k,nums,dp,tr);
            minres = min(minres,cu+necu);
        }
        return dp[start] = minres;
    }
    int minCost(vector<int>& nums, int k) {
        
        int  n = nums.size();
        vector<vector<int>>tr(n,vector<int>(n,0));
        for(int i = 0; i<n; i++){
            
            vector<int>m(1001,0);
            int count = 0;
            for(int j = i ; j<n; j++)
            {
                
                int num = nums[j];
                if(m[num]>0){
                    
                    if(m[num] == 1)
                        count+=2;
                    else
                        count++;
                }
                m[num]++;
                tr[i][j] = count;
            }
            
        }
        
        vector<int>dp(n,-1);
        return fun(0,k,nums,dp,tr);
    }
};