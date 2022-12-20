class Solution {
public:
    int jump(vector<int>& nums) {
        
        int place = 0,count = 0,end = 0;
        
        for(int i = 0; i<nums.size()-1; i++){
            
            place = max(place,i+nums[i]);
            
            //if i which meet to the end point than place value 
            //which is the farthest point to move the end point 
            //therfore we going to minimum steps to move 
            if(i == end){
                end = place;
                count++;
            }
            
        }
        
        return count;
    }
};