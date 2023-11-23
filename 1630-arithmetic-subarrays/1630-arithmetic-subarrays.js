/**
 * @param {number[]} nums
 * @param {number[]} l
 * @param {number[]} r
 * @return {boolean[]}
 */
var checkArithmetic = function(nums){
    let maxnum = Math.max(...nums);
    let minnum = Math.min(...nums);
    if((maxnum - minnum) % (nums.length -1) != 0) false;
    let step = (maxnum - minnum) / (nums.length -1);
    if(step == 0) return true;
    const set = new Set(nums);
    for(let i = 1; i<nums.length ; i++){
        if(!set.has(minnum + i * step)) return false;
    }
    return true;
}
var checkArithmeticSubarrays = function(nums, l, r) {
    
    let ans = [];
    for(let i = 0; i<l.length; i++){
        let subarr = nums.slice(l[i],r[i]+1);
        ans.push(checkArithmetic(subarr));
        
    }
    return ans;
};