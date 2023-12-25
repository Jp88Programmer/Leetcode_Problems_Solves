/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {  
    if(nums.length == 1) return 1;
    let k = 1,id = 1;
    for(let i = 1; i<nums.length; i++){
        if(nums[i-1] != nums[i]){
            nums[id] = nums[i];
            id++;
            k++;
            // if(i == nums.length-1){
            //     nums[id] = nums[i];
            //     id++;
            //     k++;
            // }
        }
    }
    return k;
};