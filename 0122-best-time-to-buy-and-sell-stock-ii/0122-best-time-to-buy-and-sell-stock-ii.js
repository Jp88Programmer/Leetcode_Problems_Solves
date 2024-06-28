/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    
    let buy = prices[0],pro = 0;
    
    for(let i = 0; i<prices.length; i++){
        if(buy > prices[i]){
            // prices[i] = buy;
            buy = prices[i];
        }
        let cp = prices[i] - buy;
        
        if(cp > 0){
            pro += cp;
            buy = prices[i];
        }
        // console.log(pro)
        
    }
    
    return pro;
};