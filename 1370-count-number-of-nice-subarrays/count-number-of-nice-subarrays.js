/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numberOfSubarrays = function(nums, k) {

    let count = 0,sum = 0;

    const map = new Map();
    map.set(sum,1);

    for(let i = 0; i<nums.length; i++){
        if(nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
            
        sum += nums[i];
        if(map.has(sum - k)){
            count += map.get(sum - k);
        }
        map.set(sum,map.has(sum)? map.get(sum) + 1 : 1);
    }
    
    return count;
};