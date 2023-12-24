/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let n = nums.length;
   for(let i = 1; i<nums.length;i++){
       let temp = nums[i];
       let j = i-1;
       for(; j>=0 && nums[j] > temp; j--){
           nums[j+1] = nums[j];
       }
       // [nu,nums[j+1]] = [nums[j+1],nums[i]];
       nums[j+1] = temp;
   }
};