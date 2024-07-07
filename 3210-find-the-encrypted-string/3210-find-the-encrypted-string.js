/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var getEncryptedString = function(s, k) {
    let str = "";
    let n = s.length;
    let arr = s.split("");
    arr.forEach((st,index) => {
        str += arr[(index + k) % n];
    })
    return str;
};