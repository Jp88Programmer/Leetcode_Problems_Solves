/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    return nums.reduce((count,num) => num.toString().length % 2 == 0 ? count + 1 : count ,0);
};