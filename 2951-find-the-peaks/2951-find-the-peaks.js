/**
 * @param {number[]} mountain
 * @return {number[]}
 */
var findPeaks = function(mountain) {
    
    if(mountain.length < 3) return [];
    let ans = [];
    for(let i = 1; i<mountain.length-1; i++){
        if(mountain[i-1] < mountain[i] && mountain[i] > mountain[i+1])
            ans.push(i);
    }
    return ans;
};