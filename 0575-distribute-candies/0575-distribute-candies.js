/**
 * @param {number[]} candyType
 * @return {number}
 */
var distributeCandies = function(c) {
    return Math.min(new Set(c).size,Math.floor(c.length/2))
};