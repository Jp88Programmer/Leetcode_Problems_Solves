/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    
    let sum = 0;
    let map = new Map();
    map.set(sum,1);
    let maxSumArr = 0;
    nums.map(n => {
        sum += n;
        if(map.has(sum - k)){
            maxSumArr+=map.get(sum-k);
        }
        map.set(sum,map.has(sum)?map.get(sum)+1:1);
    })
    return maxSumArr;
};
