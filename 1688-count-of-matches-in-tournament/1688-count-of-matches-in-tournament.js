/**
 * @param {number} n
 * @return {number}
 */
var numberOfMatches = function(n) {
    
    let ans = 0;
    while(n != 1){
        if(n % 2 === 0){
            ans += Math.floor(n/2);
            n = Math.floor(n/2);
        }else{
            ans += Math.floor((n-1)/2);
            n = Math.floor((n-1)/2)+1;
        }
    }
    return ans;
};

