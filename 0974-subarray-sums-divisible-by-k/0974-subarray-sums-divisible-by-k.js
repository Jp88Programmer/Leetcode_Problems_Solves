/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraysDivByK = function(nums, k) {
    
    let map = [0];
    map[0] = 1;
    let sum = 0,count = 0;
    nums.forEach((e)=>{
        sum += e ;
        let r = (sum % k + k)%k;
        
        map[r] = map[r] || 0;
        count += map[r]
        map[r]++;
    })
    // console.log(map);
    return count;
};