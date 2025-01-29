/**
 * @param {string} s
 * @return {boolean}
 */
const isPal = function(str) {
    let start = 0,end = str.length - 1;
    while(start < end){
        if(str.charAt(start) !== str.charAt(end))
            return false;
        start++;
        end--;
    }
    return true;
}
var isPalindrome = function(s) {
   const res = (s.match(/[a-zA-Z0-9]/g)|| []).map(str => /[A-Z]/.test(str)? str.toLowerCase(): str).join("");
   return isPal(res);
};