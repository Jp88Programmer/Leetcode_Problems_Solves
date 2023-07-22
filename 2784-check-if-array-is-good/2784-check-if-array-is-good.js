/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isGood = function(nums) {
    
    nums.sort((a,b)=> a - b)
    let n = nums.length - 1
    for(let i = 0; i<nums.length; i++){
        if(nums[i] != Math.min(n,i+1))
            return false;
    }
    return true;
};