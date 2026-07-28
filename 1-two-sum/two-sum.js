/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
   let ans = [];
   const map = new Map();
   for(let [i,num] of nums.entries()){
        let key = target - num;
        if(map.has(key)){
            ans.push(i);
            ans.push(map.get(key));
            return ans;
        }else{
            map.set(num,i);
        }
   }
    return [-1,-1];
};