/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
     // let ans = new Array(n).fill(new Array(n).fill(0));
    let ans = [];
    for(let i = 0; i<n ;i++){
        let arr = [];
        for(let j = 0; j<n; j++)
            arr.push(0)
        ans.push(arr);
    }
    // console.log(ans)
        let rowBegin = 0,rowEnd = n - 1,colBegin = 0,colEnd = n - 1;
        let count = 1;
        while(rowBegin <= rowEnd && colBegin <= colEnd){
            for(let i = colBegin ; i<=colEnd ; i++){
                ans[rowBegin][i] = count;
                count++;
            }
            // console.log(ans)
            rowBegin++;
            
            for(let i = rowBegin; i<= rowEnd; i++){
                ans[i][colEnd] = count;
                count++;
            }
            // console.log(ans)
            colEnd--;
            
            if(rowBegin <= rowEnd){
                for(let i = colEnd; i>= colBegin ; i--){
                    ans[rowEnd][i] = count;
                    count++;
                }
            }
            // console.log(ans)
            rowEnd--;
            if(colBegin <= colEnd){
                for(let i = rowEnd ; i>= rowBegin; i--){
                    ans[i][colBegin] = count;
                    count++;
                }
            }
            // console.log(ans)
            colBegin++;
        }
        return ans;
};