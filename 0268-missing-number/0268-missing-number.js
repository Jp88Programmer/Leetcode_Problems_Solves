/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    
    if(nums.length == 1 && nums[0] != 0) return 0;
    
    let sum = nums.reduce((acc,num) => acc + num,0);
    let n = nums.length;
    let sum1 = Math.floor( n * ( n + 1) / 2)
    
    return sum1 - sum;
    
};