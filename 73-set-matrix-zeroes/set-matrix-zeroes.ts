/**
 Do not return anything, modify matrix in-place instead.
 */

function setZeroes(matrix: number[][]): void {
    
    const cr = [];
    const cc = [];
   
   for(let i = 0; i<matrix.length; i++){
        for(let j = 0; j<matrix[i].length; j++){
            if(matrix[i][j] == 0){
                cr.push(i);
                cc.push(j);
            }
        }
    }

    for(let i = 0; i<matrix.length; i++){
        for(let j = 0; j<matrix[i].length; j++){
            if(cr.includes(i) || cc.includes(j))
                matrix[i][j] = 0;
        }
    }
};