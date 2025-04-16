/**
 * @param {number[]} nums
 * @param {number} goal
 * @return {number}
 */

var fun = function(nums,goal) {

    if(goal < 0) return 0;
    let count = 0;
    let j = 0;
    let sum = 0;

    for(let i = 0; i<nums.length; i++){
        sum += nums[i];
        while(sum > goal){
            sum -= nums[j++];
        }
        count += (i - j + 1);
    }

    return count;
}
var numSubarraysWithSum = function(nums, goal) {

    return fun(nums,goal) - fun(nums,goal-1);
  
};