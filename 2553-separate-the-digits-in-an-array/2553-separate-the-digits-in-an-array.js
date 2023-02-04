/**
 * @param {number[]} nums
 * @return {number[]}
 */
var separateDigits = function(nums) {
    
    let arr = [];
    
    for(let i = 0; i<nums.length; i++){
        
        let str = new String(nums[i]);
        
        for(const s of str)
            arr.push(parseInt(s));
    }
    
    return arr;
};