/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    
    let maxLength = 0;
    sentences.map((s) => {
        const len = s.split(" ").length;
        maxLength = Math.max(maxLength,len);
    })
    
    return maxLength;
};