/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */

var maxFreq = function(map){
    return Math.max(...map);
   
}
var characterReplacement = function(s, k) {
    
    const map = new Array(26).fill(0);
    let maxFr = 0,j = 0,res = 0;

    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);
        map[s.charCodeAt(i) - 65]++;
        let op = (i - j + 1) - maxFreq(map);
        while(op > k){
            let sj = s.charAt(j);
            map[s.charCodeAt(j) - 65]--;
            j++;
            op = (i - j + 1) - maxFreq(map);
        }
        res = Math.max(res,i - j + 1);
    }
    
    return res;
};