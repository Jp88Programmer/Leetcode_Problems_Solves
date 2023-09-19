class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // sort(nums.begin(),nums.end());
        int count[nums.size()];
        
          for(int i = 0 ; i < nums.size() ; i++)
              count[i] = 0 ;
        
        
        for(int i = 0 ; i < nums.size()  ; i++){
            
           count[nums[i]]++;
            
        }
        
         for(int i = 0 ; i < nums.size() ; i++){
            
           // count[nums[i]]++;
             if(count[i] > 1)
                 return i;
            
        }
        
        return 0 ; 
    }
};