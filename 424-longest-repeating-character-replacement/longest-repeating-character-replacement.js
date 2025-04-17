/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */

var maxFreq = function(map){

    let maxfr = 0;
    for(let [key,value] of map){
        maxfr = Math.max(value,maxfr);
    }
    return maxfr;
}
var characterReplacement = function(s, k) {
    
    const map = new Map();
    let maxFr = 0,j = 0,res = 0;

    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);

        map.set(st,map.has(st)? map.get(st) + 1 : 1);
        let op = (i - j + 1) - maxFreq(map);
        while(op > k){
            let sj = s.charAt(j);
            map.set(sj,map.get(sj) - 1);
            if(map.get(sj) == 0){
                map.delete(sj);
            }
            j++;
            op = (i - j + 1) - maxFreq(map);
        }
        res = Math.max(res,i - j + 1);
    }
    return res;
};