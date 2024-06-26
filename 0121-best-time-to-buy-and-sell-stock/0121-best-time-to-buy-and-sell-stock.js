/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    let ans = 0,sum = 0;
    for(let i = 1; i<prices.length; i++){
       sum += prices[i] - prices[i-1];
       sum = Math.max(0,sum);
       ans = Math.max(ans,sum);
    }
    return ans;
};