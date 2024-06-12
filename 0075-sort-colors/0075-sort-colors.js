/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
//Insertion Sort 
var sortColors = function(nums) {
   
    let two = nums.length - 1,one = 0,i = 0;
    
    while(one <= two && i <= two){
        if(nums[i] == 0){
            [nums[i],nums[one]] = [nums[one],nums[i]];
            i++;
            one++;
        }
        else if(nums[i] == 2){
            [nums[i],nums[two]] = [nums[two],nums[i]];
            two--;
        }
        else if(nums[i] == 1) i++;
    }
};