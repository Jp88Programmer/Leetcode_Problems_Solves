/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function(nums, k) {
    
    let sum = nums.reduce((acc,val) => acc + val,0);
    let op = sum % k;
    return op;
};