/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    
    const map = new Map();
    for(let [i,n] of nums.entries()){
        if(map.has(n)){
            return true;
        }else{
            map.set(n,true);
        }
    }
    return false;
    
};