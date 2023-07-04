/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    
    let ones = 0,twos = 0;
    nums.map((n)=>{
        ones = (ones ^ n) & (~twos);
        twos = (twos ^ n) & (~ones);
    })
    return ones;
};