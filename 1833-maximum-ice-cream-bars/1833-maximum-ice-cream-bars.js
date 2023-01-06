/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function(costs, coins) {
    
    costs.sort((a,b) => a - b);
    
    let sum = 0,count = 0;
    costs.map((e)=>{
        if(sum + e <= coins){
            sum += e;
            count++;
        }
            
    })
    
    return count ;
};