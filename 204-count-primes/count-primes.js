/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let res = new Array(n).fill(true);
    res[0] = res[1] = false;

    for(let i = 2; i<=Math.sqrt(n); i++){
        if(res[i]){
            for(let j = i * i; j<n; j+=i)
                res[j] = false;
        }
    }

    return res.filter(r => r === true).length;
};