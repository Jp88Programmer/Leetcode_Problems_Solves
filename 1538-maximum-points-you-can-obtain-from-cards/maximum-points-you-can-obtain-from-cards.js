/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(cardPoints, k) {
    let totalSum = cardPoints.reduce((sum,card) => sum + card,0);
    let n = cardPoints.length;
    let sum = 0,res = 0;
    for(let i = 0; i<(n - k); i++){
        sum += cardPoints[i];
    }
    res = Math.max(res,totalSum - sum);
    for(let i = (n-k); i<n; i++){
        sum += cardPoints[i] - cardPoints[i - (n - k)];
        res = Math.max(res,totalSum - sum);
    }
    return res;
};