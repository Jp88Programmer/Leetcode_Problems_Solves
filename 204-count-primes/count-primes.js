/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let arr = new Array(n).fill(1);
    for(let i = 2; i * i < n; i++){
        if(arr[i] == 1){
            for(let j = i * i; j < n; j += i){
                if(arr[j] == 1)
                    arr[j] = 0;
            }
        }
    }
    return arr.reduce((c,e,i) => e == 1 && i > 1 ? c + 1 : c,0);
};