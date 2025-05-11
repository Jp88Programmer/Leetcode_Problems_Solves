/**
 * @param {string[]} strs
 * @return {string}
 */
function comp(s1,s2){

    let i = 0,j = 0;
    let res = "";
    while(i < s1.length && j < s2.length){
        if(s1.charAt(i) == s2.charAt(j)) res += s1.charAt(i);
        else 
            break;
        i++,j++;
    }
    return res;
}
var longestCommonPrefix = function(strs) {
    
    let s = strs[0];

    for(let i = 1 ; i<strs.length; i++){
        let str = strs[i];
        s = comp(s,str);
    }

    return s;
};