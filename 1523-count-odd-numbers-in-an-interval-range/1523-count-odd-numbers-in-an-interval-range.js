/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
    
    let diff = high - low + 1;
    let res = parseInt(diff/2);
    let resOdd = res + 1;
    if(parseInt(diff % 2) === 0){
        return  res;
    }else{
        if(parseInt(low % 2) === 0){
            return res;
        }else{
            return res + 1;
        }
    }

};