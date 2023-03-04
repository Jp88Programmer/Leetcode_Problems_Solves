class Solution {
public:
    int countWays(vector<vector<int>>& r) {
        
        sort(r.begin(),r.end());
        int start = r[0][0];
        int end = r[0][1];
        vector<vector<int>>ans;
        for(int i = 1; i<r.size(); i++){
            if(end < r[i][0] && start < r[i][1]){
                ans.push_back({start,end});
                start = r[i][0];
                end = r[i][1];
            }else{
                start = min(start,r[i][0]);
                end = max(end,r[i][1]);
            }
        }
        ans.push_back({start,end});
        int a = 1;
        for(int i=0;i<ans.size();i++){
            a=(a*2)%1000000007;
        }

        return a;
    }
};