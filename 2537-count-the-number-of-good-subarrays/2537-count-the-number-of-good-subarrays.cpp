class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        
        int j = 0,count = 0;
        long long res = 0;
        
        for(int i = 0; i<nums.size(); i++){
            count += m[nums[i]]++;
            while(count >= k){
                count -= --m[nums[j++]];
            }
            res += j;
        }
        return res;
    }
};