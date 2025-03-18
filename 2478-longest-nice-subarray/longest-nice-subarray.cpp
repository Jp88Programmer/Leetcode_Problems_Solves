class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        //method one not work but analze first
        /*
        int maxLen = INT_MIN,len=0;
        
        int j = 0;
        for(int i = 1; i < nums.size(); i++){
            
            int k = j ;
            len = 0;
            while(k <i && (nums[k] & nums[i]) == 0){
                len++;
                k++;
            }
            if(k != i){
                j = i;
            }
            
            maxLen = max(maxLen,len+1);
        }
        
        return maxLen ;
        */
        
        //method 2
        
         int a = 0, i = 0, res = 0, n = nums.size();
        for (int j = 0; j < n; ++j) {
            while ((a & nums[j]) > 0)
                a ^= nums[i++];
            a |= nums[j];
            res = max(res, j - i + 1);
        }
        return res;
        
    }
};