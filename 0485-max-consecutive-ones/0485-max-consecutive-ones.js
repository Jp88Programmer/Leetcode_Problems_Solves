/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    
    let count = 0,ans = 0;
    nums.forEach((e)=>{
        count = e === 1 ? ++count :0;
        ans = Math.max(count,ans);
    })
    return ans;
};