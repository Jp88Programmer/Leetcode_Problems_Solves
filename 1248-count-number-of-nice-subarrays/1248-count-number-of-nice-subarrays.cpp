class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int j = 0,odd = 0,count = 0,res = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 != 0){
                k--;
                count = 0;
            }
            
            while(k == 0){
                if(nums[j] % 2 != 0)
                    k+=1;
                j++;
                count++;
                // if(odd == k) count++;
            }
            res += count;
        }
        return res;
    }
};