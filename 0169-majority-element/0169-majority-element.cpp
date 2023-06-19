class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto i : nums)
            m[i]++;
        
        for(auto x : m){
            if(x.second > nums.size()/2)
                return x.first;
        }
        return -1;
    }
};