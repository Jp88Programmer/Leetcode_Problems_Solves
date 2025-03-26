/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    let arr = [...nums];
    for(let i = 0; i<arr.length; i++){
        nums[(i+k) % nums.length] = arr[i];
    }
};