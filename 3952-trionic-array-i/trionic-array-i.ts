function isTrionic(nums: number[]): boolean {
    let n = nums.length;
    let i = 0;
    while(i + 1 < n && nums[i] < nums[i+1]) ++i;
    if(i == 0 || i == n-1) return false;

    let p = i;
    while(i + 1 < n && nums[i] > nums[i+1]) ++i;
    if(i == p || i == n-1) return false;

    while(i + 1 < n && nums[i] < nums[i+1]) ++i;

    return i == n - 1;
};