/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let ci = 0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i] !== 0)
            nums[ci++] = nums[i];
    }

    while(ci < nums.length){
        nums[ci++] = 0;
    }
};