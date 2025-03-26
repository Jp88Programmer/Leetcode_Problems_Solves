/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
    
    // [3,4,5 | 1,2,4]
    // [2,3,4,5,1]
    // [1,2,3,4,5]

    let count = 0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i] > nums[(i+1) % nums.length]){
           count++;
        }    
    }

    return count <= 1
};