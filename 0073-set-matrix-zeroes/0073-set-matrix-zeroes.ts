/**
 Do not return anything, modify matrix in-place instead.
 */
const modRowCols = function(matrix,row,col) {
    
    
    for(let i = 0; i<matrix.length; i++){
            
        for(let j = 0; j<matrix[i].length; j++){
            
            if(row == i || col == j)
                matrix[i][j] = 0;
        }
    }
    
}
function setZeroes(matrix: number[][]): void {
    
    let calrc = [];
    
    matrix.map((row,i)=>{
        
        row.map((col,j)=>{
            if(col == 0)
                calrc.push([i,j]);
        })
    })
    

    calrc.map(arr =>{
        modRowCols(matrix,arr[0],arr[1]);
       
    })
};