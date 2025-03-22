/**
 * @param {number} num
 * @return {boolean}
 */

let countAllDivisors = function(num) {
    let res = [];
    for(let i = 1; i<=Math.sqrt(num); i++){

        if(num % i == 0){
            res.push(i);
            if(Math.floor(num/i) !== i && i != 1){
                res.push(Math.floor(num/i));
            }
        }
    }
    return res;
}
var checkPerfectNumber = function(num) {

    if(num == 1) return false;
    return countAllDivisors(num).reduce((acc,num) => acc + num,0) == num ;
};