/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    
    let ans = [];
    
    let i = 0;
    while(i < word1.length && i < word2.length){
        ans.push(word1.charAt(i));
        ans.push(word2.charAt(i));
        i++;
    }
    
    while(i<word1.length){
        ans.push(word1.charAt(i));
        i++;
    }
    while(i<word2.length){
        ans.push(word2.charAt(i));
        i++;
    }
    return ans.join('');
};