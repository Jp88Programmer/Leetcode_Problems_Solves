/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    const m = new Map();
    let sum = 0,ans = 0;
    m.set(0,1);
    
    nums.map(n => {
        sum += n;
        if(m.has(sum - k)){
            ans += m.get(sum - k);
        }
        m.set(sum,m.has(sum) ? m.get(sum) + 1 : 1);
    })
    return ans;
};