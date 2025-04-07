/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let count = 1;
    let ans = nums[0];

    for(let i = 1; i<nums.length; i++) {
        const num = nums[i];
        if(count == 0){
            ans = num;
            count++;
        }else if(ans == num){
            count++;
        }else{
            count--;
        }

    }

    return ans;
};