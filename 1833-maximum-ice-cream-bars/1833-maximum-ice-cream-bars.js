/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function(costs, coins) {
    
    costs.sort((a,b) => a - b);
    
    let count = 0;
    costs.map((e)=>{
        if(e <= coins)  coins -= e,count++
    })
    
    return count ;
};