/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */

var sortColors = function(nums) {
        let s = 0,e = nums.length-1;
        let i = 0;
        while(s <= e && i <= e){
            if(nums[i] == 0){
                [nums[s],nums[i]] = [nums[i],nums[s]];
                s++;
                i++;
            }
            else if(nums[i] == 2){
                [nums[i],nums[e]] = [nums[e],nums[i]];
                e--;
                
            }
            else
                i++;
        }
};