class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        
        /*
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        
        for(auto i : nums){
            if(ans == i)
                ans *= 2;
        }
        
        return ans;
        */
         unordered_set<int> s(nums.begin(), nums.end());
        int a = 1;
        while (s.count(a))
            a <<= 1;
        return a;
    }
};