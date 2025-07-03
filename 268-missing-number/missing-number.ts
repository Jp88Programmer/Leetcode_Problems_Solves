function missingNumber(nums: number[]): number {
    let n = nums.length;
    let sum = Math.floor((n * (n+1)) / 2);
    let sum1 = nums.reduce((acc,e)=> acc+e);
    return sum - sum1;
};