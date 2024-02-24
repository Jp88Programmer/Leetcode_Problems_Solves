/**
 * @param {string} s
 * @return {string}
 */
var makeSmallestPalindrome = function(s) {
    
    let str = [...s.split("")];
    
    for(let i = 0; i<str.length/2; i++){
        if(str[i] !== str[str.length-1-i]){
            if(str[i] < str[str.length-1-i]){
                str[str.length-1-i] = str[i];
            }else{
                str[i] = str[str.length-1-i];
            }
            // str[i] = str[i] < str[str.length-1-i] ? str[i] : str[str.length-1-i]
        }
    }
    
    return str.join("")
};