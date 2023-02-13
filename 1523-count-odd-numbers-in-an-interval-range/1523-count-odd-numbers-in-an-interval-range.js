/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
    
    let diff = high - low + 1;
    
    if(parseInt(diff % 2) === 0){
        return  parseInt(diff/2);
    }else{
        
        if(parseInt(low % 2) === 0){
            return parseInt(diff/2);
        }else{
            return parseInt(diff/2) + 1
        }
        
    }
    // return parseInt(low % 2) === 0 ? parseInt(diff / 2) : parseInt(diff/2)-1;
    // return parseInt(diff/2);
};