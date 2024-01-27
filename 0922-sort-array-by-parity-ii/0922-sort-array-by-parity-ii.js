/**
 * @param {number[]} nums
 * @return {number[]}
 */
function swap(nums,even,odd){
    [nums[even],nums[odd]] = [nums[odd],nums[even]];
}
var sortArrayByParityII = function(nums) {
    let even = 0,odd = 1;
    let n = nums.length;
    while(odd < n && even < n){
        if(nums[even] % 2 == 1){
            swap(nums,even,odd);
            odd+=2;
        }else
            even+=2;
    }
    return nums;
};