/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    
    if(n == 0) return 0;
    if(n<=1) return 1;
    
    let arr = [1,1,0];
    
    for(let i = 3; i<=n ; i++){
        let curr = arr[0] + arr[1] + arr[2];
        arr[2] = arr[1];
        arr[1] = arr[0];
        arr[0] = curr;
    }
    
    return arr[0];
};