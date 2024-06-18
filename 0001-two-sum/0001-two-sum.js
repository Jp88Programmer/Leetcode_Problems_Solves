/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    let map = new Map();
    let ans = [];
    nums.map((num,index) => {
        if(map.has(target - num)){
            ans = [index,map.get(target-num)];
        }else{
            map.set(num,index);
        }
    })
    return ans;
};