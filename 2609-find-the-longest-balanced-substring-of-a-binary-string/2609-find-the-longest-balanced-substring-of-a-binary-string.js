/**
 * @param {string} s
 * @return {number}
 */
var findTheLongestBalancedSubstring = function(s) {
    
    let ans = 0;
   
    
    for(let i = 0; i<s.length; ){
        
        let count0 = 0;
        let count1 = 0;
        while(i < s.length && s.charAt(i) == '0'){
            count0++;
            i++;
        }
        while(i < s.length && s.charAt(i) == '1'){
            count1++;
            i++;
        }
        let len = 2 * Math.min(count0,count1);
        ans = Math.max(ans,len);
    }
    return ans;
};