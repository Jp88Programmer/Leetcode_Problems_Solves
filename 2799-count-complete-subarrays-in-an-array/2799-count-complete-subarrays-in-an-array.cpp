class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        
        unordered_map<int,int>m,m1;
        int count = 0;
        for(auto i : nums)
            m1[i]++;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
            if(m.size() == m1.size())
                count++;
            for(int j = i+1; j<nums.size(); j++){
                m[nums[j]]++;
                if(m.size() == m1.size())
                    count++;
            }
            m.clear();
        }
        return count;
    }
};