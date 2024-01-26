/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
   const arr = [...nums];
    arr.map((e,i)=> nums[(i+k) % nums.length] = e);
    
};