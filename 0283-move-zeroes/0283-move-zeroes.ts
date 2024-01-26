/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let id = 0
    nums.map((n,i) => {
        if(n != 0)
            nums[id++] = n;
    })
    while(id < nums.length)
        nums[id++] = 0;
};