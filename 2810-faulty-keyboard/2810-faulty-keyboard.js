/**
 * @param {string} s
 * @return {string}
 */
var finalString = function(s) {
    let str = ""
    for(let i = 0; i<s.length; i++){
        if(s.charAt(i) == 'i'){
            str = str.split('').reverse().join("");
        }else{
            str += s.charAt(i);
        }
    }
    return str;
};