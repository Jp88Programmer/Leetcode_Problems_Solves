/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let res = new Array(n).fill(true);
    res[0] = res[1] = false;

    let count = 0;
    for(let i = 2; i<=Math.sqrt(n); i++){
        if(res[i]){
            count++;
            for(let j = i * i; j<n; j+=i)
                res[j] = false;
        }
    }

    for(let i = Math.floor(Math.sqrt(n)+1); i<n; i++){
        if(res[i]) count++;
    }
       
    return count;
};