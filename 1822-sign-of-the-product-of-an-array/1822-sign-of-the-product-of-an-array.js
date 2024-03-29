/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    let count = 0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i]<0) count++;
        if(nums[i] == 0) return 0;
    }
    return count % 2 == 0 ? 1 : -1;
};