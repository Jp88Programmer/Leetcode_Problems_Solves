/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var numberOfChild = function(n, k) {
    
    n--;
    let round = Math.floor(k / n);
    let remaining = k % n;
    
    if(round % 2 == 0){
        return remaining;
    }else{
        return (n - remaining);
    }

};