/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    // const map = {};
    const map = new Map();
    for(let i = 0; i<nums.length; i++)
        // map[nums[i]] = map[nums[i]] ? map[nums[i]]+1 : 1;
        map.set(nums[i],map.get(nums[i]) ? map.get(nums[i]) + 1 : 1);
    
    let ans = -1;
    for([key,value] of map){
        if(value == 1)
            ans = key;
    }
    return ans;
};