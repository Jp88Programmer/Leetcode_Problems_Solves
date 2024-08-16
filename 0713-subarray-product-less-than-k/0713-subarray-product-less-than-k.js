/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numSubarrayProductLessThanK = function(nums, k) {
    
    let ans = 0,mul = 1,j = 0;
    let i = 0;
    if(k <= 0) return 0;
    for(; i<nums.length; i++){
        let num = nums[i];
        mul *= num;
        while(j < i && mul >= k){
            mul = Math.floor(mul/nums[j++]);
        }
        if(mul < k)
            ans += i - j + 1;
    }
    return ans;
    
};