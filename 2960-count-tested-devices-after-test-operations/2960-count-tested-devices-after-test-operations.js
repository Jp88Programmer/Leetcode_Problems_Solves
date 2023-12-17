/**
 * @param {number[]} batteryPercentages
 * @return {number}
 */
var countTestedDevices = function(bp) {
    
    let count = 0;
    
    for(let i = 0; i<bp.length; i++){
        if(bp[i] > 0){
            count++;
            for(let j = i+1; j<bp.length; j++){
                if(bp[j]>0)
                    bp[j]--;
            }
        }
    }
    return count;
};