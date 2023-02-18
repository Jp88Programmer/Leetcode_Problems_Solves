/**
 * @param {number[]} nums
 * @return {number}
 */
var minimizeSum = function(nums) {
     // int n = nums.size();
     //    if(n<=3) return 0;
     //    sort(nums.begin(),nums.end());
     //    return min({nums[n-2]-nums[1],nums[n-1]-nums[2],nums[n-3]-nums[0]});

    let n = nums.length;
    nums.sort((a,b) => a - b);
    return n <= 3 ? 0 : Math.min(nums[n-2]-nums[1],nums[n-1]-nums[2],nums[n-3]-nums[0]);
};