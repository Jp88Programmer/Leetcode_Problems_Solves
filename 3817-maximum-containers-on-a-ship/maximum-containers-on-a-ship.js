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

    let we = Math.floor(maxWeight / w);

    return we;

};