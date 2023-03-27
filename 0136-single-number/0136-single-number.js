/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    const map = {};
    for(let i = 0; i<nums.length; i++){
        map[nums[i]] = map[nums[i]] ? map[nums[i]]+1 : 1;
    }
    console.log(map);
    let ans = -1;
    for(key in map){
        if(map[key] == 1)
            ans = parseInt(key);
    }
    return ans;
};