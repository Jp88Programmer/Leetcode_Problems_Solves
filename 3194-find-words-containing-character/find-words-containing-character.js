/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
    
    let arr = [];
    words.map((word,i) => {
        if(word.includes(x))
            arr.push(i)
    })

    return arr;
};