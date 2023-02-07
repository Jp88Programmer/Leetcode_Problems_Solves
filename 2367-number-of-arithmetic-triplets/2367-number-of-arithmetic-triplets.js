/**
 * @param {number[]} nums
 * @param {number} diff
 * @return {number}
 */
var arithmeticTriplets = function(nums, diff) {
    
    let count = 0;
    
    const map = new Map();
    
    for(let i = 0; i<nums.length; i++){
        map.set(nums[i],true);
    }
    
    
    for(let i = 0; i<nums.length; i++){
        if(map.has(nums[i]-diff) && map.has(nums[i]+diff))
            count++;
    }
        
      
    return count;
};