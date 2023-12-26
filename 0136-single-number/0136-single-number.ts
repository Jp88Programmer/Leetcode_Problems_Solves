function singleNumber(nums: number[]): number {
    let res = nums[0];
    for(let i = 1; i<nums.length; i++){
        res ^= nums[i];
        console.log(res)
    }
    return res;
};