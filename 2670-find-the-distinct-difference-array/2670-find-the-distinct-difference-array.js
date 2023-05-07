/**
 * @param {number[]} nums
 * @return {number[]}
 */
var distinctDifferenceArray = function(nums) {

    let res = [];
    for(let i = 0; i<nums.length; i++){
        let prefix=0,suffix=0;
            prefix = [...new Set(nums.slice(0,i+1))].length;
            suffix = [...new Set(nums.slice(i+1,nums.length))].length;
        res.push(prefix-suffix);
    }
    return res;
};