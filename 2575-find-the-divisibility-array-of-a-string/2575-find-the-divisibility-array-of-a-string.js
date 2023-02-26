/**
 * @param {string} word
 * @param {number} m
 * @return {number[]}
 */
var divisibilityArray = function(word, m) {
    
    let res = new Array(word.length).fill(0);
    let num = 0;
    
    for(let i = 0; i<word.length; i++){
        num = (num * 10 + parseInt(word[i])) %  m;
        if(num === 0){
            res[i] = 1;
        }
    }
    
    return res;
};