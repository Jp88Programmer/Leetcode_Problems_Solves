/**
 * @param {number[]} nums
 * @return {number}
 */
var evenNumberBitwiseORs = function(nums) {
    return nums.reduce((bitOr,num) => num % 2 == 0 ? bitOr | num : bitOr,0);
};