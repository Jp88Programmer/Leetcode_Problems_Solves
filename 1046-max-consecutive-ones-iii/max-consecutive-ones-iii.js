/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    // [1,1,1,0,0,0,1,1,1,1,0]
    let j = 0;
    let zero = 0;
    let res = 0;

    for(let i = 0; i<nums.length; i++){
        if(nums[i] == 0)
            zero++;
        while(zero > k){
            if(nums[j] == 0)
                zero--;
            j++;
        }
        res = Math.max(res,i - j + 1);
    }
    return res;
    
};