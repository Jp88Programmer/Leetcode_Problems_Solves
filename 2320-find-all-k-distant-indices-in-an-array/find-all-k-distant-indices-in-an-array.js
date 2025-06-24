/**
 * @param {number[]} nums
 * @param {number} key
 * @param {number} k
 * @return {number[]}
 */
var findKDistantIndices = function(nums, key, k) {
    
    let res = [], r = 0;

    for(let j = 0; j<nums.length; j++){
        if(nums[j] == key){
            let l = Math.max(r, j-k);
            r = Math.min(nums.length-1,j+k) + 1;
            for(let i = l; i<r; i++)
                res.push(i);
        }
    }

    return res;
};