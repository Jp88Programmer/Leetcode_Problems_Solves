/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    
    let maxLength = 0;
    
    sentences.map((s)=> s.split(" ")).map((w)=>{
        return maxLength < w.length ? (maxLength = w.length) : maxLength;   
    })
    
    return maxLength;
};