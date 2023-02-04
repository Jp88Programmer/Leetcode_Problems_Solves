class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        
        vector<int> ans;
        // vector<string> str;
        
        for(int i = 0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            
            for(auto s : str)
                ans.push_back(s-48);
        }
        
        return ans;
        
        /*
         vector<int> ans;
        for(auto n: nums){
            vector<int> t;
            while(n > 0){
                t.push_back(n%10);
                n = n/10;
            }
            for(int i = t.size()-1; i >= 0; --i) ans.push_back(t[i]);
        }
        return ans;
        */
    }
};