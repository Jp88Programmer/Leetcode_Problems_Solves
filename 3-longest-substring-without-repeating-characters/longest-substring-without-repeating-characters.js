/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const set = new Set();
    let l = 0;
    let res = 0;

    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);
        while(set.has(st) && l <= i){
            set.delete(s.charAt(l++));
        }
        set.add(st);
        res = Math.max(res,i - l + 1);
    }
    return res;
};