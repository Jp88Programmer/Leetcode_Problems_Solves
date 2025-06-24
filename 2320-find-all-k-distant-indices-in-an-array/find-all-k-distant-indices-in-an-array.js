/**
 * @param {number[]} nums
 * @param {number} key
 * @param {number} k
 * @return {number[]}
 */
var findKDistantIndices = function(nums, key, k) {
    
    let arr = [];
    
    for(let i = 0; i<nums.length; i++){
        for(let j = 0; j < nums.length; j++){
            if(Math.abs(i - j) <= k && nums[j] == key){
                if(!arr.includes(i))
                    arr.push(i);
            }
        }
    }

    return arr.sort((a,b) => a - b);
};