/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAdjacentDistance = function(nums) {
     let res = Number.MIN_SAFE_INTEGER;

        for(let i = 1; i<=nums.length; i++){

            res = Math.max(res,Math.abs(nums[i-1] - nums[i % nums.length]));
        }

        return res;
};