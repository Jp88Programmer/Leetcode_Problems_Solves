/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    let s = -1,ans = 0,count = 0;
    for(let i  =0; i < nums.length ; i++){
        if(nums[i] == 0) count++;
        while(count > k){
            s++;
            if(nums[s] == 0) count--;
        }
        let len = i - s;
        ans = Math.max(ans, len);
    }
    return ans;
};