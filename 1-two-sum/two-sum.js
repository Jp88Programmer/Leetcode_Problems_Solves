/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let obj = {}; 
    nums.map((n,i) => {
        obj[n] = i;
    }); 
    
    let ans = [];

    for(let [i,n] of nums.entries()){
        if(obj[target - n] && obj[target - n] !== i){
            return [i,obj[target-n]];
        }
    }

    return [-1,-1]
};