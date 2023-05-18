/**
 * @param {string[]} strs
 * @return {number}
 */
var maximumValue = function(strs) {
    
    let maxlen = 0;
    strs.map((str)=>{
        let flag = true;
        for(let i = 0; i<str.length; i++){
            if(str.charCodeAt(i)<48 || str.charCodeAt(i)>57){
                flag = false;   
                break;
            }    
        }
        if(flag)
            maxlen = Math.max(maxlen,parseInt(str));
        else
            maxlen = Math.max(maxlen,str.length);
    })
    return maxlen;
};