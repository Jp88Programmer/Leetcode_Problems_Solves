/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {

    if(numRows == 1) return [[1]];
    if(numRows == 2) return [[1],[1,1]];

    const res = new Array(numRows);
    res[0] = [1];
    res[1] = [1,1];

    for(let i = 2; i<numRows; i++){
        const arr = new Array(i+1);
        arr[0] = 1;
        arr[i] = 1;
        for(let j = 1; j<i; j++){
            arr[j] = res[i-1][j-1] + res[i-1][j];
        }
        res[i] = arr;
    }

    // console.log(res);
    return res;
   
};