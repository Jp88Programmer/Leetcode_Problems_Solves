/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    
    const cr = [];
    const cc = [];
    matrix.map((mat,row) => {
        mat.map((m,col) => {
            if(m == 0){
                cr.push(row);
                cc.push(col);
            }
        })
    })

    for(let i = 0; i<matrix.length; i++){
        for(let j = 0; j<matrix[i].length; j++){
            if(cr.includes(i) || cc.includes(j))
                matrix[i][j] = 0;
        }
    }
};