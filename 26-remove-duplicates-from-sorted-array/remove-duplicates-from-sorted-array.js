/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {  
    
    let id = 1
    for(let i = 0; i<nums.length-1; i++){
        if(nums[i] != nums[i+1]){
            nums[id++] = nums[i+1];
        }
    }

    return id;
};