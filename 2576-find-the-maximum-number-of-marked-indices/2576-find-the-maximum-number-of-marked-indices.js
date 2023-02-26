/**
 * @param {number[]} nums
 * @return {number}
 */
var maxNumOfMarkedIndices = function(nums) {
    
    nums.sort((a,b)=> a - b);
    
    let j = nums.length-1;
    let count = 0;
    for(let i = Math.floor(nums.length/2) - 1; i>=0; i--){
        if(nums[i]*2 <= nums[j]){
            j--;
            count+=2;
        }
    }
    return count;
};