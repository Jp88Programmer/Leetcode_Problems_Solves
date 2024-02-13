/**
 * @param {string[]} words
 * @return {string}
 */
var firstPalindrome = function(words) {
    
    for(let w of words)
        if(w === [...w].reverse().join("")) return w
    return ""
};