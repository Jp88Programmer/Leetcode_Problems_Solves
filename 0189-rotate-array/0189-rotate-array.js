/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    
    let arr = [...nums];
    let n = nums.length;
    for(let i = 0; i<n; i++){
        nums[(i+k)%n] = arr[i];
    }
    
};