/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let sum = nums.reduce((acc,n) => acc+n);
    let n = nums.length;
    let sumOriganal = Math.floor((n * (n+1)) / 2);
    return sumOriganal - sum;
    
    
};