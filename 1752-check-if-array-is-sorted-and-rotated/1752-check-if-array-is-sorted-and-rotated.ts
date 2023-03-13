function check(nums: number[]): boolean {
    
    let count = 0;
    for(let i = 1; i<nums.length; i++){
        if(nums[i-1]>nums[i])
            count++;
    }
    if(nums[nums.length-1]>nums[0])
        count++;
    return count<=1
};