/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function(nums) {
    let num = nums[0];
    let arr = nums.filter(n => n === num);
    return arr.length == nums.length ? 0 : 1;
};