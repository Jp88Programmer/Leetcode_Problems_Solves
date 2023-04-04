/**
 * @param {string} s
 * @return {number}
 */
var partitionString = function(s) {
    
    let arr = new Array(26).fill(0);
    
    let count = 0;
    for(let i = 0; i<s.length; i++){
        
        let n = s.charAt(i).charCodeAt(0) - 97;
        console.log( s.charAt(i).charCodeAt(0) ,n);
        if(arr[n]===0){
            arr[n]++;
        }else{
            count++;
            arr = new Array(26).fill(0);
            i--;
        }
    }
    return count+1;
};