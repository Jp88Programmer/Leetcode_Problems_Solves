/**
 Do not return anything, modify nums in-place instead.
 */
function rotate(nums: number[], k: number): void {
    let arr = [...nums];
    for(let i = 0; i<nums.length; i++){
        nums[(i+k)%nums.length] = arr[i];
    }
};