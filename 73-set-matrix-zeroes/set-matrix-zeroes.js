/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    
    const cr = [];
    const cc = [];
    const arr = [];
   
   for(let i = 0; i<matrix.length; i++){
        for(let j = 0; j<matrix[i].length; j++){
            if(matrix[i][j] == 0){
                cr.push(i);
                cc.push(j);
                // matrix[0][j] = 0;
                // matrix[i][0] = 0;
            }
        }
    }

    for(let i = 0; i<matrix.length; i++){
        for(let j = 0; j<matrix[i].length; j++){
            if(cr.includes(i) || cc.includes(j))
                matrix[i][j] = 0;
        }
    }

    // for(let i = 0; i<matrix.length; i++){
    //     if(matrix[i][0] == 0){
    //         for(let j = 0; j<matrix[i].length; j++){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // for(let j = 0; j<matrix[0].length; j++){
    //     if(matrix[0][j] == 0){
    //         for(let i = 0; i<matrix.length; i++){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
};