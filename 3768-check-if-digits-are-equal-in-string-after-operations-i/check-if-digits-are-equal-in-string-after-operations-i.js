/**
 * @param {string} s
 * @return {boolean}
 */
var hasSameDigits = function(s) {
    let res = "";
    let str = s;
    while(true){
        for(let i = 1; i<str.length; i++){
            res += ((Number(str.charAt(i)) + Number(str.charAt(i-1))) % 10).toString()
        }
        console.log(res);
        if(res.length == 2){
            break;
        }
        str = res;
        res = "";
    }

    return res.charAt(res.length - 1) == res.charAt(res.length - 2)
    

   
    
};