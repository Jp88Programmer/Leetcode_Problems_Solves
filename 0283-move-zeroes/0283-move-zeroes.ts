/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let start=0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i]!==0){
            let temp = nums[i];
            nums[i] = nums[start];
            nums[start] = temp;
            start++;
        }
    }
};