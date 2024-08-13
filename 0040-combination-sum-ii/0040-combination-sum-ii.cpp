class Solution {
public:
    
    void fun(int id,vector<int>&c,vector<int>&ds,vector<vector<int>>&ans,int target){
        
        if(target == 0) {
            ans.push_back(ds);
            return;
        }
        
        for(int i = id ; i<c.size(); i++){
            if(i > id && c[i] == c[i-1] || c[id] > target) continue;
            ds.push_back(c[i]);
            fun(i+1,c,ds,ans,target-c[i]);
            ds.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        fun(0,candidates,ds,ans,target);
        
        return ans;
    }
};