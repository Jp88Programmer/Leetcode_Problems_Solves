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
    let flip = false;
    while(k<4){
        flip = false;
        for(let i = 0; i<matrix.length; i++){
            for(let j = 0; j < matrix[i].length; j++){
                if(matrix[i][j] != target[j][n-i-1]){
                    flip = true;
                    break;
                }
            }
        }
        
        if(flip){
            trans(matrix);
            for(let i = 0; i<matrix.length; i++){
                matrix[i].reverse();
            }
        }else{
            break;
        }
       
        k++;
    }
    
    if(flip)
        return false;
    return true;
};