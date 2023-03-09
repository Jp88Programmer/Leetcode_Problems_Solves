/**
 * @param {number} num
 * @return {number}
 */
var splitNum = function(num) {
    
    let arr = num.toString().split('');
    arr.sort((a,b)=> a - b);
    let num1 = "";
    for(let i = 0; i<arr.length; i+=2){
        num1 += arr[i];
    }
    let num2 = "";
    for(let i = 1; i<arr.length; i+=2){
        num2 += arr[i];
    }
    return parseInt(num1) + parseInt(num2);
};