#define vii vector<vector<int>>
#define vi vector<int>
class Solution {
    
public:
    static bool cmp(vi &a,vi &b){
        return (a[1] - a[0]) < (b[1] - b[0]);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        vii dp;
        
        for(int i =0;i<rocks.size(); i++){
            dp.push_back({rocks[i],capacity[i]});
        }
        
        sort(dp.begin(),dp.end(),cmp);
        
        
        int count =0;
        for(int i = 0; i<dp.size(); i++){
            
            if(dp[i][0] < dp[i][1] && (dp[i][1] - dp[i][0]) <= additionalRocks){
                additionalRocks = additionalRocks - (dp[i][1] - dp[i][0]);
                dp[i][0] += (dp[i][1] - dp[i][0]);
                
                // cout << additionalRocks << endl;
            }
            if(dp[i][0] == dp[i][1]) count++;
            
        }
        
        // for(auto i : dp){
        //     cout << i[0] << " " << i[1] << endl;
        // }
        
        return count;
    }
};