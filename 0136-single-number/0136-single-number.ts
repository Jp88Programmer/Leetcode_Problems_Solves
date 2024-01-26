function singleNumber(nums: number[]): number {
   let ans = nums[0];
    nums.map((n,i)=> i > 0 ? ans ^= n : n);
    return ans;
};