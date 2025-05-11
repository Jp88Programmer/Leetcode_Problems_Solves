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
    
    let pre = strs[0];
    let preLen = pre.length;

    for(let i = 1 ; i<strs.length; i++){
        let str = strs[i];
        while(pre != str.substr(0,preLen)){
            preLen--;
            if(preLen == 0)
                return "";
            pre = pre.substr(0,preLen);
        }
    }

    return pre;
};