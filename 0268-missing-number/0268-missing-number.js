/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    
    let n = nums.length;
    
    let sum = Math.floor((n * (n+1)) / 2);
    
    let sum1 = nums.reduce((acc,e)=> acc+e);
    
    return sum - sum1;
    
    
};