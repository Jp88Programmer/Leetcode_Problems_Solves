/**
 * @param {number} n
 * @return {number}
 */
var numberOfMatches = function(n) {
    
    let ans = 0;
    while(n != 1){
        const matches = Math.floor(n/2);
        ans += matches;
        n = n - matches;
    }
    return ans;
};

