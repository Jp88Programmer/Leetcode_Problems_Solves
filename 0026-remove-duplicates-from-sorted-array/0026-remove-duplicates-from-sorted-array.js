/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {  
    
    let index = -1;
    for(let i = 0; i<nums.length; i++){
        if(i == 0 || nums[index] != nums[i]){
            nums[++index] = nums[i];
        }
    }
    return index+1;
};