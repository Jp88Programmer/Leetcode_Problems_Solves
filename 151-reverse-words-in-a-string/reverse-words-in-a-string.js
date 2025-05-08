/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    
    var arr = s.split(" ");
    
    console.log(arr);
    
    s = "";
    arr.reverse();
    
    for(let i = 0; i < arr.length ; i++){
        
        if(arr[i] != ''){
             s += arr[i] + " "; 
        }
           
    }
    
    return s.substring(0,s.length-1);
};