/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    
    if(t.length < s.length) return false;

    let j = 0;

    for(let i = 0; i<t.length; i++){
        if(s.charAt(j) == t.charAt(i)){
            j++;
        }
    }

    return j == s.length;
};