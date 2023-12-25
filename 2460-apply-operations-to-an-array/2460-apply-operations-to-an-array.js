/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function(nums) {
    
    for(let i = 0; i<nums.length; i++){
        if(nums[i] == nums[i+1]){
            nums[i] *= 2;
            nums[i+1] = 0;
        }
    }
    let i = 0;
    for(let n of nums){
        if(n != 0) nums[i++] = n;
    }
    while(i < nums.length) nums[i++] = 0;
    return nums;
};