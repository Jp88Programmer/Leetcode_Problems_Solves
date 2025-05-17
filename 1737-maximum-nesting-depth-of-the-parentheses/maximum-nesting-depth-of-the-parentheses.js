/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function(s) {
    let ans = 0;
    let count = 0;
    for(let i = 0 ; i<s.length; i++){
        if(s.charAt(i) == "("){
            ans = Math.max(++count,ans);
            
        }else if(s.charAt(i) == ")"){
            count--;
        }
    }

    // console.log(count);
    // ans = Math.max(count,ans);
    return ans;

};