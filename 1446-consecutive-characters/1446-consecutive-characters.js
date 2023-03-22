/**
 * @param {string} s
 * @return {number}
 */
var maxPower = function(s) {
    let count=1,ans=0;
    
    for(let i = 0; i<s.length; i++){
        if(s.charAt(i) != s.charAt(i+1)){
            count = 1;
        }else{
            count++;
        }
        ans = Math.max(count,ans);
    }
    return ans;
};