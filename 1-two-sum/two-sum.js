/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    const map = new Map();
    const res = [];
    for(let i = 0; i<nums.length; i++){
        const num = nums[i];
        if(map.has(target - num)){
            const val = map.get(target-num);
            res.push(val);
            res.push(i);
            break;
        }else{
            map.set(num,i);
        }
    };
    
    return res;

};