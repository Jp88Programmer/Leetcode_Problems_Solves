/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    const map = new Map();
    const arr = [];

    nums.map((num,i) =>{
        if(map.has(target-num)){
            arr.push(map.get(target-num));
            arr.push(i);
        }else{
            map.set(num,i);
        }
    })

    return arr;

};