/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    
    let num = x < 0 ? Math.abs(x) : x; 
    let res = 0;

    while(num > 0){
        res = res * 10 + (num % 10);
        num = Math.floor(num/10);
    }

    if(res < -(2**31) || res >= (2**31 - 1)){
         return 0;
    }

    return x < 0 ? -res : res;
};