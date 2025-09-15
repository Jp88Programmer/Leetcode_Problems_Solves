/**
 * @param {string} text
 * @param {string} brokenLetters
 * @return {number}
 */
var canBeTypedWords = function(text, brokenLetters) {
    let count = 0;
    let strArr = text.split(" ")
    strArr.map(t => {
        for(let i = 0; i<brokenLetters.length; i++){
            let str = brokenLetters.charAt(i);
            if(t.includes(str)){
                count++;
                break;
            }
        }
    })
    return strArr.length - count;
};