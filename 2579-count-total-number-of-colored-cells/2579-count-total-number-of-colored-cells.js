/**
 * @param {number} n
 * @return {number}
 */
var coloredCells = function(n) {
    
    let dp = new Array(n+1).fill(0);
    
    let oddNum = 3;
    let presum = 0;
    let sum = 1;
    if(n == 1) return 1;
    for(let i = 2; i<=n; i++){
        presum += oddNum-2;
        sum += oddNum;
        oddNum+=2;
        dp[i] = presum + sum ;
    }
    return dp[n];
};