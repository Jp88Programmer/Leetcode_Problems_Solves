/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    
    let res = Number.MAX_SAFE_INTEGER;
    let j = 0;
    let sum = 0;
    for(let i = 0; i<nums.length; i++){

        sum += nums[i];

        while(sum > target){
            res = Math.min(res,i - j + 1);
            sum -= nums[j++];
        }

         if(sum == target)
            res = Math.min(res,i - j + 1);
    }

    return res == Number.MAX_SAFE_INTEGER ? 0 : res;
};