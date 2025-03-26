/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {  
    
    let id = 0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i] != nums[id]){
            nums[++id] = nums[i];
        }
    }

    return id+1;
};