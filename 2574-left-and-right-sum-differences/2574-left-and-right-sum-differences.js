/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRigthDifference = function(nums) {
    
    let sum = nums.reduce((acc,num)=> acc + num);
    
    let leftSum = 0;
    let res = [];
    nums.map(e => {
        // let rightSum = sum - (leftSum + e);
        // res.push(Math.abs(leftSum-rightSum));
        res.push(Math.abs(2*leftSum-sum+e));
        leftSum += e;
    })
    return res;
};