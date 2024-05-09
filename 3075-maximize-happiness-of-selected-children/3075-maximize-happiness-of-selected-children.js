/**
 * @param {number[]} happiness
 * @param {number} k
 * @return {number}
 */
var maximumHappinessSum = function(hap, k) {
    hap.sort((a,b)=> a - b);
    let i = 0,ans = 0;
    while(i < k){
        ans += Math.max( hap[hap.length - 1 - i] - i,0);
        i++;
    }
    return ans;
};