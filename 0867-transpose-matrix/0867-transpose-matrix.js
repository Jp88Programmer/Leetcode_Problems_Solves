/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function(matrix) {
    
    let ans = [];
    for(let j = 0; j<matrix[0].length; j++){
        let arr = [];
        for(let i = 0; i<matrix.length; i++){
            arr.push(matrix[i][j]);
        }
        ans.push(arr);
    }
    return ans

};

// 1 2 3    
// 4 5 6  

// 1 4
// 2 5
// 3 6