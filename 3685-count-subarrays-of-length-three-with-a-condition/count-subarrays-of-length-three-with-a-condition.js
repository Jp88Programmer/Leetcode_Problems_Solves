/**
 * @param {number[]} nums
 * @return {number}
 */
var countSubarrays = function(nums) {
    
    let k = 3,count = 0;
    for(let i = 0; i<=nums.length - k; i++){
        if(nums[i] + nums[i + k -1] == (nums[i+ k -2] / 2)){
            count++;
        }
    }
    return count;
};