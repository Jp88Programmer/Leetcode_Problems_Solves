/**
 * @param {number[]} nums
 * @param {number} modulo
 * @param {number} k
 * @return {number}
 */
var countInterestingSubarrays = function(nums, modulo, k) {
    
    let count = new Array(nums.length).fill(0);
    let map = new Map();

    for(let i = 1; i<=nums.length; i++){
        count[i] = count[i-1] + (nums[i-1] % modulo == k ? 1 : 0);
    }

    let sum = 0;
    for(let i = 0; i<=nums.length; i++){
        sum += map.has((count[i] + modulo - k ) % modulo) ? map.get((count[i] + modulo - k ) % modulo) : 0;

        if(map.has(count[i] % modulo)){
            map.set(count[i] % modulo,map.get(count[i] % modulo) + 1);
        }else{
            map.set(count[i] % modulo,1);
        }
        // if(map.has((count[i] + modulo - k ) % modulo)){
        //     map.set((count[i] + modulo - k ) % modulo,map.get((count[i] + modulo - k ) % modulo) + 1);
        // }else{
        //     map.set((count[i] + modulo - k ) % modulo,1);
        // }
    }

    // let res = 0;
    // for(let [key,val] of map){
    //     res += val;
    // }

    // return res;

    return sum;


};