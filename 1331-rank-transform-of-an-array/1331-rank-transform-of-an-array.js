/**
 * @param {number[]} arr
 * @return {number[]}
 */
var arrayRankTransform = function(arr) {
    let nums = [...new Set(arr)];
    nums.sort((a,b) => a - b);
    let map = new Map();
    
    let ans = nums.map((num,id) => {
        map.set(num,id+1);
    });
    
    return arr.map(e => map.get(e))
    // return ans;
};