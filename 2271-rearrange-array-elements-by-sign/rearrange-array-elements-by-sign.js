/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
    
    let arr = [...nums];
    let ei = 0,oi = 1;
    
    for(let i = 0; i<nums.length; i++){
        if(nums[i] > 0){
            arr[ei] = nums[i]; 
            ei += 2;
        }else{
            arr[oi] = nums[i];
            oi += 2;
        }
    }

    return arr;
};