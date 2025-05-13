/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    if(s.length != t.length) return false;

    let arr = new Array(26).fill(0);

    for(let i = 0; i<s.length; i++){
        let si = s.charCodeAt(i);
        let ti = t.charCodeAt(i);
        arr[Number(si) - 97]++;
        arr[Number(ti) - 97]--;
    }

    for(let i = 0; i<arr.length; i++){
        if(arr[i] != 0) return false;
    }

    return true;
};