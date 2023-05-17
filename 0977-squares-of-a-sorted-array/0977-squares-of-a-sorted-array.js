/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    const sqarr = nums.map((num) => num * num);
    sqarr.sort((a,b)=>a-b);
    return sqarr;
};