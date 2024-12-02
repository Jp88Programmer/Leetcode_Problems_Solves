/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {
    
    let ans = -1;
    let arr = sentence.split(" ");
    for(let i = 0; i<arr.length; i++){
        let s = arr[i];
        if(s.indexOf(searchWord) == 0 && s.includes(searchWord)){
            ans = i;
            break;
        }
    }
    
    if(ans == -1) 
        return ans;
    return ans+1;
};