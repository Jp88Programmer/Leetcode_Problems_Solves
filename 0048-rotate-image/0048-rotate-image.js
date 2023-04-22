/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var trans = function(matrix)  {
    
    for(let i = 0; i<matrix.length; i++){
        for(let j = i+1; j < matrix[i].length; j++){
            [matrix[i][j],matrix[j][i]] = [matrix[j][i],matrix[i][j]];
        }
    }
}
var rotate = function(matrix) {
    
    trans(matrix);
    for(let i = 0; i<matrix.length; i++){
        matrix[i].reverse();
    }
};