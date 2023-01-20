#define vii vector<vector<int>>
#define vi vector<int>

class Solution {
public:
    set<vi>s;
    void fun(int id,vi &nums,vi &ds,vii &ans){
        
        if(id == nums.size()){
            if(ds.size()>=2){
                // ans.push_back(ds);
                s.insert(ds);
            }
            return;
        }
        
//         if(ds.size()>=2){
//             // if(ds[ds.size()-1] > ds[ds.size()-2])
//                 // ans.push_back(ds);
//             s.insert(ds);
//         }
            
        if(ds.size() == 0 || (ds.size()>0 && nums[id] >= ds.back())){
            ds.push_back(nums[id]);
            fun(id+1,nums,ds,ans);
            ds.pop_back();
        }
        
        fun(id+1,nums,ds,ans);
        
        /*
        for(int i = id; i<nums.size(); i++){
            
            // if(i != id && nums[i]>nums[id]){
            if(i!=0 && i > id && (nums[i] <= nums[i-1])) continue;
            
            // if(i > id && nums[i] <= nums[id]){
            //     // break;
                // continue;
            // }
            // if(nums[i]>nums[id]){
                if(ds.size()>1){
                    if(ds.back() <= nums[i])
                        ds.push_back(nums[i]);
                }else{
                    ds.push_back(nums[i]);
                }
                
            fun(i+1,nums,ds,ans);
            if(ds.size() > 0)
                ds.pop_back();
            
            // fun(i,nums,ds,ans);
        } 
        */
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vii ans;
        vi ds;
        vi arr;
        // sort(nums.begin(),nums.end(),greater<int>());
        
//         for(int i = 0; i<nums.size()-1; i++){
//             if(nums[i] == nums[i+1]) continue;
//             arr.push_back(nums[i]);
//         }
//         arr.push_back(nums[nums.size()-1]);
        
//         for(auto i : arr) cout << i << " ";
        // cout << endl;
        fun(0,nums,ds,ans);
        
        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
        
    }
};