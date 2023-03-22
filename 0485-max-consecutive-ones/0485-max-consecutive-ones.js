/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    
    let count = 0,ans = 0;
    nums.forEach((e)=>{
        if(e === 1)
            count++;
        if(e === 0)
            count = 0;
        ans = Math.max(count,ans);
    })
    return ans;
};