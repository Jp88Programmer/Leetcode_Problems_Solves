/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
//     kandane's algorithm
    // let ans = 0,sum = 0;
    // for(let i = 1; i<prices.length; i++){
    //    sum += prices[i] - prices[i-1];
    //    sum = Math.max(0,sum);
    //    ans = Math.max(ans,sum);
    // }
    // return ans;
    
//     calculate - curretn sell and overrall sell
    
    let lv = Number.MAX_SAFE_INTEGER,cs = 0,ans = 0;
    
    prices.map((p,i) => {
        if(p < lv){
            lv = p;
        }
        cs = p - lv;
        
        if(ans < cs)
            ans = cs;
    })
    return ans;
};