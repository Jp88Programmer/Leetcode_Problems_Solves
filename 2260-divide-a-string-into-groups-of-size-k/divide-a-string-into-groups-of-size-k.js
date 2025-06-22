/**
 * @param {string} s
 * @param {number} k
 * @param {character} fill
 * @return {string[]}
 */
var divideString = function(s, k, fill) {
    
    let arr = [];
    let i = 0,str = "";

    for(i = 0; i<s.length; i++){
        str += s.charAt(i);
        if(str.length % k == 0){
            arr.push(str);
            str = "";
        }
    }

    if(str.length > 0){
        while(str.length % k != 0){
            str += fill;
        }
        arr.push(str);
    }

    return arr;
};