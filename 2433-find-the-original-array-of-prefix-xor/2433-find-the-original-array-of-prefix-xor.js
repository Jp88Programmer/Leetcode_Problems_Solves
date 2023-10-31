/**
 * @param {number[]} pref
 * @return {number[]}
 */
var findArray = function(pref) {
    const ans = [pref[0]];
    for(let i = 1; i<pref.length; i++){
        // pref[i] = pref[i] ^ pref[i-1];
        ans.push(pref[i] ^ pref[i-1]);
    }
    return ans;
};