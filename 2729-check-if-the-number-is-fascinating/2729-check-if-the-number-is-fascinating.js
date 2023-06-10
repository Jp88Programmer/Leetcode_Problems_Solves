/**
 * @param {number} n
 * @return {boolean}
 */
var isFascinating = function(n) {
    
    let n2 = n * 2;
    let n3 = n * 3; 
    
    console.log(n,n2,n3)
    let arr = new Array(10).fill(0);
    
    let str = n.toString() + n2.toString() + n3.toString();
    console.log(str)
    for(let i = 0; i<str.length; i++){
        if(parseInt(str[i]) == 0 || arr[parseInt(str[i])] > 0)
            return false;
        arr[parseInt(str[i])]++;
    }
    return true;
};