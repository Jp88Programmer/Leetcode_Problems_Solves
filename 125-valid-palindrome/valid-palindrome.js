/**
 * @param {string} s
 * @return {boolean}
 */
function isPal(str,s = 0,e = str?.length-1){
    let ans = true;
    if(s <= e){
        if(str[s] != str[e])
            return false;
        ans = isPal(str,s+1,e-1);
    }
    return ans;

}
var isPalindrome = function(s) {
    
    let reg = /[a-z|A-Z|0-9]/g;
    let ans = s.match(reg);
    ans?.map((a,i) =>{ ans[i] = a.toLowerCase()});
    console.log(ans?.join(""))
    return isPal(ans?.join(""));
};