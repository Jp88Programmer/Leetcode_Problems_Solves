/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    
     let ans;
        let count = 0;
        
        for(let i = 0; i<nums.length; i++){
            if(count ==  0){
                ans = nums[i];
                count++;
            }else if(nums[i] == ans){
                count++;
            }else{
                count--;
            }
        }
        
        let count1 = 0;
        
        for(let i = 0; i<nums.length; i++){
            if(nums[i] == ans){
                count1++;
            }
        }
        
        if(count1 > nums.length/2)
            return ans;
        else
            return -1;
    
};