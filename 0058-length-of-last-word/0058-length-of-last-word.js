/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let strs = s.trim().split(" ");
    return strs.at(-1).length;
};