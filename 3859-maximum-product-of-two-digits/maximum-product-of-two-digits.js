/**
 * @param {number} n
 * @return {number}
 */
var maxProduct = function(n) {
    let strArr = n.toString().split("").sort((a,b) => b - a)
    return strArr[0] * strArr[1];
};