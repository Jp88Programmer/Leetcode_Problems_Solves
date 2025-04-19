/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    let disx = Math.abs(z-x);
    let disy = Math.abs(z-y);
    return disx < disy ? 1 : disx == disy ? 0 : 2;
};