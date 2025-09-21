function evenNumberBitwiseORs(nums: number[]): number {
    return nums.reduce((bitOr,num) => num % 2 == 0 ? bitOr | num : bitOr,0);
};