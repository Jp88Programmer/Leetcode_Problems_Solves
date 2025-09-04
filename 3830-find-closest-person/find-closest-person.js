/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    let dx = Math.abs(x-z);
    let dy = Math.abs(y-z);
    return dx == dy ? 0 : dx < dy ? 1 : 2;
};