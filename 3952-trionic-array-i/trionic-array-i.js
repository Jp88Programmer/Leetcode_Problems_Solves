/**
 * @param {number[]} nums
 * @return {boolean}
 */

function checkTrionic(nums,p,q){

    for(let i = 0; i<p; i++){
        if(nums[i] > nums[i+1])
            return false;
    }

    for(let i = p; i<q; i++){
        if(nums[i] < nums[i+1])
            return false;
    }

    for(let i = q; i<nums.length - 1; i++){
        if(nums[i] > nums[i+1])
            return false;
    }

    return true;
}
var isTrionic = function(nums) {
    
    let n = nums.length;
    let i = 0;
    while(i + 1 < n && nums[i] < nums[i+1]) ++i;
    if(i == 0 || i == n-1) return false;

    let p = i;
    while(i + 1 < n && nums[i] > nums[i+1]) ++i;
    if(i == p || i == n-1) return false;

    while(i + 1 < n && nums[i] < nums[i+1]) ++i;

    return i == n - 1;
     
};