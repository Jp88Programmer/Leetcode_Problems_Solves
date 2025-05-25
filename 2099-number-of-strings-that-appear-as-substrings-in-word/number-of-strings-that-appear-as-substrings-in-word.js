/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
    let count = 0;
    patterns.map((p,i) => {
        if(word.includes(p))
            count++;
    })
    return count;
};