/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(cp, k) {
    let l = cp.length - k;
    let sum = 0,maxsum = 0;
    let ts = cp.reduce((s,n) => s + n,0);
    console.log(ts);
    for(let i = 0; i < l ; i++){
        sum += cp[i];
    }

    maxsum = Math.max(maxsum,ts - sum);
    // console.log(maxsum);

    let j = 0;
    for(let i = l; i< cp.length; i++){
        sum += cp[i] - cp[j++];
        maxsum = Math.max(maxsum,ts - sum);
        // console.log(maxsum);
    }

    return maxsum;

};