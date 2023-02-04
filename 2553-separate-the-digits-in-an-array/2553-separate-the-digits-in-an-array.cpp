class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        /*
        vector<int> ans;
        vector<string> str;
        
        for(auto i : nums){
            str.push_back(to_string(i));
        }
        
        for(int i = 0; i<str.size(); i++){
            
            for(int j = 0; j<str[i].size(); j++){
                ans.push_back(str[i][j] - 48);
            }
        }
        
        return ans;
        */
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
    }
};