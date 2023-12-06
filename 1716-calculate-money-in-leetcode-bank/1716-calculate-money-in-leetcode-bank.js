/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    
    let amount = 0;
    let k = 1,j=1;
    for(let i = 1; i<=n; i++){
        console.log(k)
        amount += k;
        k++;
        if(i % 7 === 0){
            j++;
            k = j;
        }
    }
    return amount;
    
};