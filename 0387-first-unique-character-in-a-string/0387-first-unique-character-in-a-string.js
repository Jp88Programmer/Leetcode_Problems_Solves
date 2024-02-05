/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    
    let obj = {};
    s.split("").map(a => !obj[a] ? obj[a] = 1 : obj[a]++)
    for(let i = 0; i<s.length; i++)
        if(obj[s.charAt(i)] == 1)
            return i;
    
    return -1;
};