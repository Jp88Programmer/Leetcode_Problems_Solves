/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    
        // int tib[n+1];
        let tib = Array(n+1);
        
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        
        tib[0] = 0;
        tib[1] = 1;
        tib[2] = 1;
        for(let i = 3; i<=n ; i++){
            tib[i] = tib[i-1] + tib[i-2] + tib[i-3];
        }
        
        return tib[n];
};