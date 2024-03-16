class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        //prefix sum method
        /* 
            
            prefix sum method store the sum and 
            goal value in the map get the answer
            if its repet that means already repet therefore you can use further 
            process its value
        */
        
        unordered_map<int,int>m;
        m[0] = -1;
        
        int maxLen = 0,sum = 0;
        
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i] == 0){
                sum -= 1;
            }
            
            if(nums[i] == 1)
                sum += 1;
            
            if(m.find(sum) != m.end()){
                
                int len = i - m[sum];
                maxLen  = max(maxLen,len);
                
            }else{
                m[sum] = i;
            }
        }
        
        return maxLen ;
    }
};