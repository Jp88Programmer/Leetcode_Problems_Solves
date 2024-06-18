/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let maxSum = Number.MIN_SAFE_INTEGER;
    let sum = 0;
    
    nums.map(num => {
        sum += num;
        maxSum = Math.max(maxSum,sum);
        if(sum < 0)
            sum = 0;
    })
    return maxSum;
};