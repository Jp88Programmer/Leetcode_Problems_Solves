/**
 * @param {string} s
 * @param {character} c
 * @return {number[]}
 */
var minDistance = function(arr,index){
    let minDist = Number.MAX_VALUE;
    arr.map((a) => {
        if(minDist > Math.abs(a-index))
            minDist = Math.abs(a-index);
    })
    return minDist;
}
var shortestToChar = function(s, c) {
    let arr = [];
    let strs = s.split("");
    strs.map((str,i) => {
        if(str == c)
            arr.push(i);
    })
    
    let res = []
    strs.map((str,i) => {
        res.push(minDistance(arr,i));
    })
    return res;
};