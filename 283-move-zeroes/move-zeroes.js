/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    
    let swapedIndex = 0;
    nums.map((num,i) => {
        if(num !== 0){
            [nums[swapedIndex],nums[i]] = [nums[i],nums[swapedIndex]];
            swapedIndex++;
        }
    })
};