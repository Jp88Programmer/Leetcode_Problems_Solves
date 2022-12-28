/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {
    
    let five=0,ten=0;
    
    for(let e of bills){
        if(e == 5) five++;
        else if(e == 10){
            ten++;
            five--;
        } 
        else if(ten > 0){
            ten--;
            five--;
        } 
        else 
            five -= 3;
        if(five < 0) return false;
    }
    
    
    
    return true;
};