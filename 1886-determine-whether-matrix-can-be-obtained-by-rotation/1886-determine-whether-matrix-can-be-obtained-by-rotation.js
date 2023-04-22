/**
 * @param {number[][]} mat
 * @param {number[][]} target
 * @return {boolean}
 */
var trans = function(matrix)  {
    for(let i = 0; i<matrix.length; i++){
        for(let j = i+1; j < matrix[i].length; j++){
            [matrix[i][j],matrix[j][i]] = [matrix[j][i],matrix[i][j]];
        }
    }
}
var findRotation = function(matrix, target) {
    
    let n = matrix.length;
    let k = 0;
    while(k<4){
        if(JSON.stringify(matrix) === JSON.stringify(target))
            return true;
        trans(matrix);
        for(let i = 0; i<matrix.length; i++){
            matrix[i].reverse();
        }   
        k++;
    }
    return false;
};