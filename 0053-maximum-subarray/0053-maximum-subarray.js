/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    
    let maxSum = Number.MIN_SAFE_INTEGER;
    console.log(maxSum)
    let sum = 0;
    
    for(let i = 0; i<nums.length; i++){
        sum += nums[i];
        maxSum = Math.max(sum,maxSum);
        // console.log(maxSum,sum);
        if(sum < 0) sum = 0;
    }
    return maxSum ;
};