/**
 * @param {string[]} words
 * @return {string}
 */
var isPal = function(str){
    
    for(let i = 0; i<str.length/2; i++){
        
        if(str.charAt(i) != str.charAt(str.length - i - 1))
            return false;
    }
    return true;
}
var firstPalindrome = function(words) {
    
    for(let i = 0; i<words.length; i++){
        if(isPal(words[i]))
            return words[i];
    }
    return "";
};