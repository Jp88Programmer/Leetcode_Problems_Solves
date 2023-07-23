/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    
    let j = 0,ans = 0,zero = 0;
    for(let i = 0; i<nums.length ; i++){
        if(nums[i] == 0) zero++;
        while(zero > k){
            if(nums[j] == 0){
                zero--;
            }
            j++;
        }
        ans = Math.max(ans,i-j+1);
    }
    return ans;
};