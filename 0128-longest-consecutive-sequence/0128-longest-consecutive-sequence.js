/**
 * @param {number[]} nums
 * @return {number}
 */
/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
  let longest =0;
  let numsSet = new Set(nums);
    for(let i=0;i<nums.length;i++){
        let consecutive = 0;
        if(!numsSet.has(nums[i]-1)){
            while(numsSet.has(nums[i]+consecutive)){
                consecutive+=1;
                longest=Math.max(longest,consecutive);
            }
        }
    }
    return longest;
};