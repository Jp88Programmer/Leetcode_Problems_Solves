class Solution {
private:
    void cs(int id,vector<int>&ds,vector<int>&c,int target,vector<vector<int>>&ans){
    
        if(id == c.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(c[id] <= target){
            ds.push_back(c[id]);
            cs(id,ds,c,target - c[id],ans);
            ds.pop_back(); 
        }
        
        cs(id+1,ds,c,target,ans);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>ds;
        vector<vector<int>>ans;
        
        cs(0,ds,candidates,target,ans);
        
        return ans;
    }
};