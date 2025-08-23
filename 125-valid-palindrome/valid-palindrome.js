/**
 * @param {string} s
 * @return {boolean}
 */
function isPal(str){
    
    let s = 0,e = str?.length -1;
    while(s < e){
        if(str.toLowerCase().charAt(s++) != str.toLowerCase().charAt(e--))
            return false;
    }
    return true;

}
var isPalindrome = function(s) {
    let reg = /[a-z|A-Z|0-9]/g;
    let ans = s.match(reg);
    return isPal(ans?.join(""));
};