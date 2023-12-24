/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
const findMinElement = (nums,start)=>{
    let minId = start;
    for(let i = start+1; i< nums.length; i++)
        if(nums[minId] > nums[i])
            minId = i;
    return minId;
}
var sortColors = function(nums) {
    for(let i = 0; i<nums.length; i++){
        let minId = findMinElement(nums,i);
        [nums[i], nums[minId]] = [nums[minId],nums[i]];
    }
    return nums;
};