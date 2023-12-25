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
    let arr1 = [],arr2 = []
    for(let i = 0; i<nums.length; i++){
        if(nums[i] !== 0) 
            arr1.push(nums[i]);
        else
            arr2.push(nums[i]);
    }
    return [...arr1,...arr2];
};