/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function(word, ch) {
   
    let index = word.indexOf(ch);
    if(index == -1)
        return word;
    let s1 = word.substring(0,index+1);
    let s2 = word.substring(index+1);
    let words = s1.split("");
    words.reverse();
    return words.join("") + s2;
};