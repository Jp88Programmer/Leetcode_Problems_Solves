function singleNumber(nums: number[]): number {
    var result = nums[0];
    for(var i = 1; i < nums.length; i++) {
        result = result^nums[i];
    }
    return result;
};