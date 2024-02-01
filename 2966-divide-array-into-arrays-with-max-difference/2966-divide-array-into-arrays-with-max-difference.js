/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[][]}
 */
var divideArray = function(nums, k) {
    
    nums.sort((a,b) => a - b);
    let ans = [];
    let id = 0;
    while(id < nums.length){
        let diff = nums[id] + k;
        let temp = [];
        let i = id;
        for( ; i<nums.length && i < id + 3; i++){
            if(nums[i] <= diff){
                temp.push(nums[i]);
            }
        }
        id = i;
        if(temp.length < 3){
            return [];
        }
        ans.push(temp);
    }
    return ans;
};