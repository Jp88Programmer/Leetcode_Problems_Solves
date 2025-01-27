/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    
    let s = 0;
    let e = x;
    let ans = 0;
    while(s <= e){
        let m = Math.floor(s + (e - s)/2);
        if(m*m == x) return m;
        else if(m*m < x){
            ans = m;
            s = m + 1;
        }else
            e = m - 1;
    }
    
    return ans;
};