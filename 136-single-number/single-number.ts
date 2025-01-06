function singleNumber(nums: number[]): number {
   return nums.reduce((ans,num) => ans ^ num);
};