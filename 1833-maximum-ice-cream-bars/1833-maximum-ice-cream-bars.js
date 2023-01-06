/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function(costs, coins) {
    
    costs.sort((a,b) => a - b);
    
    let sum = 0,count = 0;
    costs.map((e)=>{
        if(e <= coins){
            // sum += e;
            coins -= e;
            count++;
        } 
    })
    
    return count ;
};