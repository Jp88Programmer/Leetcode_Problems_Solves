/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    
    let m = new Map();
    let sum = 0,res = 0;
    m.set(0,1);
    nums.map(e => {
        sum += e;
        if(m.has(sum - k)){
            res += m.get(sum - k);
        }
        m.set(sum,m.get(sum) ? m.get(sum) + 1:1);
    })
    return res;  
};