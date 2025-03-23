/**
 * @param {number} n
 * @param {number} w
 * @param {number} maxWeight
 * @return {number}
 */
var maxContainers = function(n, w, maxWeight) {
    
    if(n * n * w <= maxWeight){
        return n * n;
    }
    return Math.floor(maxWeight / w);

};