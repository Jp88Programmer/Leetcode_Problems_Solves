/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxK = function(nums) {
    
    let num = Number.MIN_SAFE_INTEGER;
    for(let n of nums){
        if(n > 0){
           let index = nums.indexOf(-n);
            if(index != -1 && num < n){
                num = n;
            }
        }
    }
    
    if(num == Number.MIN_SAFE_INTEGER)
        return -1;
    
    return num;
   
    
};