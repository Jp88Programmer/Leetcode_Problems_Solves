/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = new Map(); 
    for (let [i,n] of nums.entries()){
        console.log(i,n)
        let key = target - n; 
        if(map.has(key)){
            return [i,map.get(target-n)];
        }else{
            map.set(n,i);
        }
    }
    return [-1,-1];
};