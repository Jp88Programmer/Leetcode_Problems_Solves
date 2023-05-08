/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
    
    let sum = 0;
    let n = mat.length;
    mat.map((m,i)=>{
        m.map((e,j)=>{
            if(i == j || (n-i-1) == j)
                sum += e;
        })
    })
    return sum;
};