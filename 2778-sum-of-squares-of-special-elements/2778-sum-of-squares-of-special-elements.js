/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfSquares = function(nums) {
    let ans = 0;
    let n = nums.length;
    nums.map((e,i)=>{
        ans += n % (i+1) == 0 ? e * e : 0
    })
    return ans;
};