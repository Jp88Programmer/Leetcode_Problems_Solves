/**
 * @param {number[][]} firstList
 * @param {number[][]} secondList
 * @return {number[][]}
 */
var intervalIntersection = function(fl, sl) {
    const ans = [];
    let m = fl.length,n = sl.length;
    for(let i = 0, j = 0; i<m && j < n;){
            if(fl[i][0] <= sl[j][1] && fl[i][1] >= sl[j][0]){
                ans.push([Math.max(fl[i][0],sl[j][0]),Math.min(fl[i][1],sl[j][1])]);
            }
            fl[i][1] < sl[j][1]  ? i++ : j++;
    }
    return ans;
};