class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        /*
        vector<int>ans;
        for(int i = 0 ; i<queries.size(); i++){
            
            int sum = 0;
            int maxVal = 0;
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                
                if(sum + nums[j]<= queries[i] && nums[j] <= queries[i]){
                    sum += nums[j];
                    count++;
                }
                maxVal = max(maxVal,count);
            }
            
            ans.push_back(maxVal);
        }
        
        return ans;
        */
        
         sort(nums.begin(), nums.end());
        vector<int> res;
        for (int i = 1; i < nums.size(); ++i)
            nums[i] += nums[i - 1];
        for (int& q: queries)
            res.push_back(upper_bound(nums.begin(), nums.end(), q) - nums.begin());
        return res;
    }
};