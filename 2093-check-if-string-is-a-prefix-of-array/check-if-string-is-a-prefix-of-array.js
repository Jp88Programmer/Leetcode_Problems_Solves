/**
 * @param {string} s
 * @param {string[]} words
 * @return {boolean}
 */
var isPrefixString = function(s, words) {
    
    let com = "",res = "";

    for(let i = 0; i<words.length; i++){
        let word = words[i];
        if(s.includes(word) && s.includes(com + word)){
            res += word;
        }
        com += word;
    }
        
    return s == res;
};