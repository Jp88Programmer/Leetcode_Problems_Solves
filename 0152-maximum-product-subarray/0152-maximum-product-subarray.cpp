class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int pro = 1;
        int maxpro = nums[0];
        int l = 0,r = 0;
        for(int i = 0; i<nums.size(); i++){
            l = (l ? l : 1)*nums[i];
            r = (r ? r : 1)*nums[nums.size()-1-i];
            maxpro = max(maxpro,max(l,r));
        }
        return maxpro;
    }
};