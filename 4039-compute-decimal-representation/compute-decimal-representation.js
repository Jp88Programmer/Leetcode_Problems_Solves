/**
 * @param {number} n
 * @return {number[]}
 */
var decimalRepresentation = function(n) {
    let num = n.toString();
    let res = [];
    let mul10 = 1;
    for(let i = num.length - 1; i>=0; i--){
        let val = parseInt(num.charAt(i)) * mul10;
        if(val > 0){
            res.push(val);
        }
        mul10 *= 10;
    }
    res.reverse()   
    return res;
};