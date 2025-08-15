/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(num,addBit = 0) {
    if(addBit == 32) return false;
    if(num == 1 << addBit) return true;
    return isPowerOfFour(num,addBit + 2);
};