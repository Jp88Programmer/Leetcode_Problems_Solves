class Solution {
public:
    int jump(vector<int>& nums) {
        
        int place = 0,count = 0,end = 0;
        
        for(int i = 0; i<nums.size()-1; i++){
            
            place = max(place,i+nums[i]);
            // if(place >= nums.size()-1) return count;
            if(i == end){
                // place = i+nums[i];
                end = place;
                count++;
            }
            
        }
        
        return count;
    }
};