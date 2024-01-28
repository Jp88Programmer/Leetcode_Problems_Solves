/**
 * @param {string} s
 * @return {number}
 */
var countKeyChanges = function(s) {
    let ck = 0;
    for(let i = 0; i<s.length-1; i++){
        if(s.charAt(i).toLowerCase() != s.charAt(i+1).toLowerCase())
            ck++;
    }
    return ck;
};