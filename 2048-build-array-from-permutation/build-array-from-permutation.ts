function buildArray(nums: number[]): number[] {
    
    let ans = new Array(nums.length).fill(0);
    nums.map((num:number,i:number) => {
        ans[i] = nums[nums[i]];
    })
    return ans;
};