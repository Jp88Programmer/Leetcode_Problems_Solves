/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    
    let ans = num;
    while(ans >= 10){
        let x = ans;
        let sum = 0;
        while(x > 0){
            sum += x % 10;
            x = Math.floor(x/10);
        }
        ans = sum ;
    }
    return ans ;
};