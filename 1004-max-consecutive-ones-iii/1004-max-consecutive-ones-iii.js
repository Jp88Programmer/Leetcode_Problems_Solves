/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    
    let j = 0,ans = 0,one = 0,zero = 0;
    for(let i = 0; i<nums.length ; i++){
        
        if(nums[i] == 1) one++;
        if(nums[i] == 0) zero++;
        if(zero <= k) ans = Math.max(ans,one+zero);
        while(zero > k){
            if(nums[j] == 1){
                j++;
                one--;
            }else if(nums[j] == 0){
                j++;
                zero--;
            }
            if(zero <= k) ans = Math.max(ans,one+zero);
        }
    }
    return ans;
};