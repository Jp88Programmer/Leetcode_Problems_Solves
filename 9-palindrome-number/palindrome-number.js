/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    
    let str = x.toString();
    let s = 0,e = str.length-1;
    while(s < e){
        if(str[s++] !== str[e--])
            return false;
    }
    return true;
};