/**
 * @param {number[]} nums
 * @return {number}
 */
var minimizeSum = function(nums) {
  
    let n = nums.length;
    nums.sort((a,b) => a - b);
    return n <= 3 ? 0 : Math.min(nums[n-2]-nums[1],nums[n-1]-nums[2],nums[n-3]-nums[0]);
};