/**
 * @param {number} num
 * @return {number}
 */

var decimalSum = function(num){
    let sum = 0;
    while(num > 0){
        let r = num % 10;
        num = Math.floor(num / 10);
        sum += r;
    }
    return sum;
}
var countEven = function(num) {
    
    let ans = 0;
    for(let i = 1; i<=num; i++){
        if(decimalSum(i) % 2 == 0)
            ans++;
    }
    return ans;
};