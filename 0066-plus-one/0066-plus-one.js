/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    
    let n = digits.length;
    let carry = Math.floor((digits[n-1]+1) / 10);
    digits[n-1] = (digits[n-1]+1) % 10;
    for(let i = digits.length-2; i>=0 && carry > 0; i--){
        let val = digits[i] + carry;
        carry = Math.floor(val / 10);
        digits[i] = val % 10;
    }
    if(carry > 0){
        digits.splice(0,0,carry);
    }
    return digits;
};