/**
 * @param {number} n
 * @return {boolean}
 */
var isThree = function(n) {
    if(n == 1) return false;
    let count = 1,i = 2;
    while(i<=n){
        if(n % i == 0)
            count++;
        if(count > 3)
            return false;
        i++;
    }
    return count === 3;
};