/**
 Do not return anything, modify nums in-place instead.
 */
function wiggleSort(nums: number[]): void {
    nums.sort((a,b)=> a-b);
    let res = [...nums];
    let i = 0;
    let n = nums.length;
    let m = (n+1)>>1;
    for(let i = m -1,j = 0; i>=0; i--,j+=2){
        nums[j] = res[i];
    }
    for(let i = n-1,j = 1; i>=m; i--,j+=2){
        nums[j] = res[i];
    }
};