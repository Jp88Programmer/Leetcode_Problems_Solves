/**
 * @param {number[]} arr
 * @return {boolean}
 */
var canMakeArithmeticProgression = function(arr) {
    
    let maxnum = Math.max(...arr);
    let minnum = Math.min(...arr);
    if((maxnum - minnum) % (arr.length - 1) != 0) return false;
    let step = Math.floor((maxnum - minnum) / (arr.length - 1));
    if(step == 0) return true;
    const set = new Set(arr);
    for(let i =1; i<arr.length; i++){
        if(!set.has(minnum + i * step)) return false;
     }
    return true;
};