class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
            m[i]++;
        
        int n = nums.size();
        set<int>s;
        for(int i = 0; i<nums.size(); i++){
            if(m[nums[i]] > n/3)
                s.insert(nums[i]);
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};