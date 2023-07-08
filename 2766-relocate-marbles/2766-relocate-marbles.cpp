class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& mf, vector<int>& mt) {
        
        map<int,int>m;
        
        for(auto i : nums) m[i]++;
        
        for(int i = 0; i<mf.size(); i++){
            if(m[mf[i]] && mf[i] != mt[i]){
                m[mt[i]] = 1;
                // m.erase(mf[i]);
                m[mf[i]] = 0;
                // m[mf[i]]--;
                // m[mt[i]]++;
            }
        }
        
        vector<int>ans;
        
        for(auto x : m){
            // int j =x.second;
            if(x.second){
                
                ans.push_back(x.first);
            }
            // while(j>0){
            //     ans.push_back(x.first);
            //     j--;
            // }
        }
        
        // sort(ans.begin(),ans.end());
        return ans;
    }
};