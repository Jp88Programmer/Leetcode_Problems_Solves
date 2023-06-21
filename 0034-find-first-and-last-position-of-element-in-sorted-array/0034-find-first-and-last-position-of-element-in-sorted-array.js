/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var binarySearch = function(nums,target){
    let s = 0;
    let e = nums.length-1;
    
    while(s<=e){
        let m = Math.floor(s + (e - s)/2);
        if(nums[m] == target) return m;
        else if(nums[m] < target) s = m + 1;
        else e = m - 1;
    }
    
    return -1;
}
var searchRange = function(nums, target) {
    
    let id = binarySearch(nums,target);
    // console.log(id);
    if(id == -1) return [-1,-1];
    let s = id;
    let e = id;
    
    while(s>=0 && nums[s] == nums[id]) s--;
    while(e<nums.length && nums[e] == nums[id]) e++;
    
    return [++s,--e];
};