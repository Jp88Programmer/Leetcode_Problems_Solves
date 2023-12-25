/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let i = 0;
    for(let n of nums){
        if(n != 0) nums[i++] = n;
    }
    while(i < nums.length) nums[i++] = 0;
};