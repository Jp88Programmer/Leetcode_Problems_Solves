/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var modifiedMatrix = function(matrix) {
    for(let j = 0; j<matrix[0].length; j++){
        let maxEle = 0,minus = -1;
        for(let i = 0; i<matrix.length; i++ ){
            if(maxEle < matrix[i][j]){
                maxEle = matrix[i][j];
            }
        }
        for(let i = 0; i<matrix.length; i++ ){
            if(matrix[i][j] === -1){
               matrix[i][j] = maxEle
            }
        }
    }
    
    return matrix;
};