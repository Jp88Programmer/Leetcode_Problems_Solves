/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    
    let maxSum = Number.MIN_SAFE_INTEGER, sum = 0;
    
    nums.map((n) => {
        sum += n; 
        maxSum = Math.max(maxSum,sum);
        sum = Math.max(sum,0);
    })
    return maxSum;
};