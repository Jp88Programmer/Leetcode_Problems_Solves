/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    
    let open = 0;
    let res = "";
    for(let str of s){
        if(str == "(" && open++ > 0){
            res += str;
        }
        if(str == ")" && open-- > 1){
            res += str;
        }
    }

    return res;
};