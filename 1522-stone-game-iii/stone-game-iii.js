/**
 * @param {number[]} stoneValue
 * @return {string}
 */
var stoneGameIII = function(stoneValue) {
    const n = stoneValue.length;
    const dp = new Array(n + 1).fill(0);

    for (let i = n - 1; i >= 0; i--) {
        let best = -Infinity;
        let sum = 0;
        for (let k = 1; k <= 3 && i + k <= n; k++) {
            sum += stoneValue[i + k - 1];
            best = Math.max(best, sum - dp[i + k]);
        }
        dp[i] = best;
    }

    if (dp[0] > 0) return "Alice";
    if (dp[0] < 0) return "Bob";
    return "Tie";
};