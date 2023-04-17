class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        for(auto i : nums)
            m[i]++;
        
        
        vector<int>maxfr;
        int maxnum = INT_MIN;
        int fr = 0;
        for(auto x : m){
            if(x.second > fr)
            {
                fr = x.second;
                maxnum = x.first;
            }
        }
        
        maxfr.push_back(maxnum);
        for(auto x : m){
            if(x.second == fr)
            {
                maxfr.push_back(x.first);
            }
        }
        
        vector<int>frs(maxfr.size(),fr);
        int ans = INT_MAX;
        for(int i = 0; i<maxfr.size(); i++){
            int res = 0;
            for(int j = 0; j<nums.size(); j++){
                if(maxfr[i] == nums[j]){
                    if(frs[i] == fr)
                        res = j;
                    frs[i]--;
                    if(frs[i]==0){
                        res = j - res + 1;
                        break;
                    }
                }
            }
            
            ans = min(res,ans);
        }
        
        return ans;
    }
};