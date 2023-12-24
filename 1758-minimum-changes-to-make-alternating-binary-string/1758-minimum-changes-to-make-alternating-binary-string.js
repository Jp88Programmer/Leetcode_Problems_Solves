/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function(s) {
    
    let ones = '1',zeros = '0';
    let minOp1 = 0,minOp2 = 0;
    for(let str of s){
        if(str !== zeros){
            minOp1++;
        }
        else if(str != ones){
            minOp2++;
        }
        zeros = zeros === '0' ? '1' : '0'; 
        ones = ones === '0' ? '1' : '0'; 
    }
    return Math.min(minOp1,minOp2);
};