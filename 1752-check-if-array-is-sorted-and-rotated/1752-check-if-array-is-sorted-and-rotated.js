/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isSorted = function(nums){
    
    for(let i = 1; i<nums.length; i++){
        if(nums[i-1] > nums[i])
            return false;
    }
    return true;
}
var check = function(nums) {
    
    if(isSorted(nums)) return true;
    let par = 0;
    for(let i = 0;i<nums.length-1; i++){
        if(nums[i] > nums[i+1]){
            par = i;
            break;
        }
    }
    let left1 = nums.slice(0,par+1);
    let left2 = nums.slice(par+1,nums.length);
    // console.log(left1,left2);
    let arr = [...left2,...left1];
    console.log(arr)
    return isSorted(arr);
    
};