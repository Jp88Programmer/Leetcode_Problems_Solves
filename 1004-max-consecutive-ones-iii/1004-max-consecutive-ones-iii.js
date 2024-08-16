/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    
    let zero = 0,ans = 0,j = 0;
    
    nums.map((num,i) => {
        if(num == 0)
            zero++;
        while(zero > k){
            if(nums[j] == 0)
                zero--;
            j++;
        }
        ans = Math.max(ans,i - j + 1);
    })
    return ans;
};