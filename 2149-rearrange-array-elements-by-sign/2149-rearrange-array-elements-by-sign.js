/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
    
    let ans = new Array(nums.length).fill(0);
    let evenIndex = 0;
    let oddIndex = 1;
    
    for(let i = 0; i<nums.length; i++){
        if(nums[i]>0){
            ans[evenIndex] = nums[i];
            evenIndex += 2;
        }else{
            ans[oddIndex] = nums[i];
            oddIndex += 2;
        }
            
    }
    return ans;
};