function singleNumber(nums: number[]): number {
    let xor = 0;
    for(let i = 0; i<nums.length; i++)
        xor = xor ^ nums[i];
    return xor;
};