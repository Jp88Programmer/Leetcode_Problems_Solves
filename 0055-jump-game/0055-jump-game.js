/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    
    if(nums[0] == 0 && nums.length > 1) return false;
    
    let i = 0;
    let reach = 0;
    for(i = 0; i<nums.length && i <= reach ; i++){
        reach = Math.max(reach,i+nums[i]);
    }
    
    console.log(reach);
    return i === nums.length;
};