class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int ans = 0,sum = 0;
        m[sum] = 1;
        
        for(int i =0;i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            }else{
                nums[i] = 1;
            }
            sum += nums[i];
            if(m[sum - k] > 0){
                ans += m[sum - k];
            }
            m[sum]++;
        }
        return ans;
    }
};