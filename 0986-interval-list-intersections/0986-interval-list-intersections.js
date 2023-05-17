/**
 * @param {number[][]} firstList
 * @param {number[][]} secondList
 * @return {number[][]}
 */
var intervalIntersection = function(fl, sl) {
    
    // let fl = firstList[0];
    // let sl = secondList[0];
    const ans = [];
    let m = fl.length,n = sl.length;
    let minlen = Math.min(m,n);
    for(let i = 0; i<m; i++){
         for(let j = 0; j<n; j++){
            // if(i > 0 && (fl[i][0] == sl[i-1][1] || sl[i][0] == fl[i-1][1]))
            //     ans.push([fl[i][0],fl[i][0]]);
            if(fl[i][0] <= sl[j][1] && fl[i][1] >= sl[j][0]){
                ans.push([Math.max(fl[i][0],sl[j][0]),Math.min(fl[i][1],sl[j][1])]);
            }
         }
    }
//     for(let i = 0; i<minlen; i++){
        
        
//         if(fl[i][0] <= sl[i][1] && fl[i][1] >= sl[i][0]){
//             ans.push([Math.max(fl[i][0],sl[i][0]),Math.min(fl[i][1],sl[i][1])]);
//         }
//     }
    return ans;
};