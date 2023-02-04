/**
 * @param {number[]} prizePositions
 * @param {number} k
 * @return {number}
 */
var maximizeWin = function(prizePositions, k) {
    
    let n = prizePositions.length;
    let dp = new Array(n+1).fill(0);
    let j = 0,res = 0;
    
    for(let i = 0; i<n; i++){
        
        while(prizePositions[j] < prizePositions[i] - k)
            j++;
        
        dp[i+1] = Math.max(dp[i],i-j+1);
        res = Math.max(res,i-j+1+dp[j]);
    }
    
    return res ;
};