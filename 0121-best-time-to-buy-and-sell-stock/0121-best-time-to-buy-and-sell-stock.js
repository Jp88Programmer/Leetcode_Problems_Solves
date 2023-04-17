/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    let buy=prices[0],sell=0;
    let maxProfit = 0;
    for(let i = 1; i<prices.length; i++){
        
        sell = prices[i] - buy;
        if(prices[i] < buy)
            buy = prices[i];
        maxProfit = Math.max(maxProfit,sell);
    }
    return maxProfit;
};