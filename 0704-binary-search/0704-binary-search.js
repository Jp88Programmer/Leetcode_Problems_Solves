/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    
    let s = 0;
    let e = nums.length;
    
    while(s <= e){
        let m = Math.floor(s + (e-s)/2);
        if(nums[m] == target) return m;
        else if(nums[m] < target) s = m+1;
        else e = m - 1;
    }
    
    return -1;
};