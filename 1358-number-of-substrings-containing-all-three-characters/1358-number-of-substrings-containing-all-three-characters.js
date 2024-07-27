/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function(s) {
    
    let arr = [-1,-1,-1];
    let ans = 0;
    
    s.split("").map((str,i) => {
        
        if(str == 'a')
            arr[0] = i;
        else if(str == 'b')
            arr[1] = i;
        else if(str == 'c')
            arr[2] = i;
        
        if(!arr.includes(-1)){
            ans += Math.min(...arr) + 1;
        }
    })
    return ans;
};