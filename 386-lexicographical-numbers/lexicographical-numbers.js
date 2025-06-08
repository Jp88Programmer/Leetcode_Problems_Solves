/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    return  new Array(n).fill(0).map((num,i)=> i+1).sort();
};