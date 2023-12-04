/**
 * @param {string} num
 * @return {string}
 */
var equal = function(str){
    let ch = str.charAt(0);
    for(let i = 1; i<str.length; i++){
        if(ch !== str.charAt(i)) return false;
    }
    return true ;
}
var largestGoodInteger = function(num) {
    
    let strArr = [];
    let str = "";
    str = num.substr(0,3);
    if(equal(str)){
        strArr.push(parseInt(str));
    }
    for(let i = 1; i<=num.length-3; i++){
        str = num.substr(i,3);
        if(equal(str)){
            strArr.push(parseInt(str));
        }
    }
    if(strArr.length == 0) return "";
    let ans = Math.max(...strArr).toString();
    if(ans.charAt(0) == '0')
        return "000";
    return ans;
};