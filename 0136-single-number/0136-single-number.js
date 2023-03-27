/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    const map = {};
    for(let i = 0; i<nums.length; i++)
        map[nums[i]] = map[nums[i]] ? map[nums[i]]+1 : 1;
    
    let ans = -1;
    const arr = Object.entries(map);
    for(a of arr)
        if(a[1] == 1)
            ans = parseInt(a[0]);
    
    return ans;
};