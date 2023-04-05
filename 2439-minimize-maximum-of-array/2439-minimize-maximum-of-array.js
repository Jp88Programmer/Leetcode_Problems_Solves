/**
 * @param {number[]} nums
 * @return {number}
 */
var minimizeArrayValue = function(nums) {
    
    let sum = 0;
    let ans = 0;
    
    for(let i = 0; i<nums.length; i++){
        sum += nums[i];
        ans = Math.max(Math.floor((sum + i) / (i+1)),ans);
    }
    return ans;
};