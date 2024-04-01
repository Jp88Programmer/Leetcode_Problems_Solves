/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let strs = s.trim().split(" ");
    return strs[strs.length-1].length;
};