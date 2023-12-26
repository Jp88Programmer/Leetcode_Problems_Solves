/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let n = nums.length;
    let sum = nums.reduce((n,s) => n + s,0);
    let num = Math.floor((n * (n+1)) / 2);
    return num - sum;
};