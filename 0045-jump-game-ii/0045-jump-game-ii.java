class Solution {
    public int jump(int[] nums) {
        
        int reach = 0;
        
        int i = 0,count = 0,end = 0;
        
        for(i = 0; i<nums.length - 1 && i <= reach; i++){
            if(i + nums[i]>reach){
                reach = i + nums[i];
                // count++;
            }
            
            if(i == end){
                end = reach; count++;
            }
        }
        
        return count;
    }
}