class Solution {
public:
    
    // 0/1 knsapeck problem baase 
    int fun(int id,vector<vector<int>>&jobs,vector<int>&st,int n,vector<int>&dp){
        
        if(id>=n) return 0;
        
        if(dp[id] != -1) return dp[id];
        
        //to find the lower bound of the endTime 
        int index = lower_bound(st.begin(),st.end(),jobs[id][1]) - st.begin();
        
        //if exist than to pick the element 
        int pe = jobs[id][2] + fun(index,jobs,st,n,dp);
        
        //if not than next element which not pick element to chose further recursion call should be occur 
        int npe = fun(id+1,jobs,st,n,dp);
        
        dp[id] = max(pe,npe);
        
        return dp[id];
    }
    int jobScheduling(vector<int>& st, vector<int>& et, vector<int>& profit) {
        
        int n = st.size();
        
        vector<vector<int>>jobs;
        vector<int>dp(n,-1);
        for(int i = 0; i<n ; i++){
            jobs.push_back({st[i],et[i],profit[i]});
        }
        
        sort(jobs.begin(),jobs.end());
        sort(st.begin(),st.end());
        
        return fun(0,jobs,st,n,dp);
    }
};