/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    let buy=prices[0];
    let maxProfit = 0;
    for(let i = 1; i<prices.length; i++){
        maxProfit = Math.max(maxProfit,prices[i] - buy);
        buy = Math.min(prices[i],buy);
        
    }
    return maxProfit;
};