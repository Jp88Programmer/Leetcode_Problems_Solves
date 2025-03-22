/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let res = new Array(n).fill(true);
    res[0] = res[1] = false;

    for(let i = 2; i<n; i++){
        if(res[i]){
            for(let j = i * 2; j <n; j+=i)
                res[j] = false;
        }
    }

    let count = 0;
    res.map(r => {
        if(r) count++;
    })
    return count;
};