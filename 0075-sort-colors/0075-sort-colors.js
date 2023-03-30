/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    
    let s = 0, e = nums.length-1;
    let i = 0;
    while(i <= e){
         if(nums[i]==0){
            let temp = nums[i];
            nums[i++] = nums[s];
            nums[s] = temp;
            s++;
        }
        else if(nums[i]==2){
            let temp = nums[i];
            nums[i] = nums[e];
            nums[e] = temp;
            e--;
        }else
            i++;
    }
    
};