/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    let buy = Number.MAX_SAFE_INTEGER;
    let sell = 0;

    prices.map(p => {
        buy = Math.min(buy,p);
        sell = Math.max(sell,p - buy); 
    });

    return sell;
};