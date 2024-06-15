function singleNumber(nums: number[]): number {
   let ans = 0;
    nums.map(num => {
        ans ^= num;
    })
    return ans;
};