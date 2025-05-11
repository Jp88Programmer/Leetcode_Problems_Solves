/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function(arr) {
    
    let count = [],res = 0;
    for(let i = 0; i<arr.length; i++) {
        let a = arr[i];
        if(count.length == 3){
            res = true;
            break;
        }
        if(a % 2 == 0){
            count = [];     
        }
        else
            count.push(a);
    };
    return count.length == 3;
};