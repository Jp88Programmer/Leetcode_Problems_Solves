function removeDuplicates(nums: number[]): number {
    let count = 1;
    for(let i=1; i<nums.length; i++){
        if(nums[i]!=nums[i-1])
            nums[count++] = nums[i];
    }
    return count;
};