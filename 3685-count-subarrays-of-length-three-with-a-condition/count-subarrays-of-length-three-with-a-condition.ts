function countSubarrays(nums: number[]): number {
    let count = 0;
    for(let i = 0; i<nums.length - 2; i++){
        if(nums[i] + nums[i + 2] == (nums[i + 1] / 2)){
            count++;
        }
    }
    return count;
};