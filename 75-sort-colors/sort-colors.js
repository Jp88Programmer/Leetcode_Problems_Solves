/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let i = 0;
    let z = 0, t = nums.length - 1;
    while(i < nums.length && z <= t && i <= t){
        if(nums[i] == 0){
            [nums[i],nums[z]] = [nums[z],nums[i]];
            z++;
            i++;
        }else if(nums[i] == 2){
            [nums[i],nums[t]] = [nums[t],nums[i]];
            t--;
        }else{
            i++;
        }
    }
};