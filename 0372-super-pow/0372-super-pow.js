/**
 * @param {number} a
 * @param {number[]} b
 * @return {number}
 */
var myPow = function(x, n) {
    x %= 1337;
    if(n == 1) return x;
    if(n == 0) return 1;
    if(n % 2 == 0) return myPow((x*x)%1337,n/2) ;
    else return (x * myPow((x*x)%1337,(n-1)/2) )  % 1337;
};
var superPow = function(a, b) {
    if(a == 1) return 1;
    let carr = 0;
    console.log(b)
    b.map((e)=>{
        carr = (10*carr + e) % 1140;
    })
    console.log(carr);
    return myPow(a,carr);
    
};