function diagonalSum(mat: number[][]): number {
     let sum = 0;
    let n = mat.length;
    mat.map((x,i)=>{
        x.map((y,j)=>{
            if(i == j || (n-i-1) == j)
                sum += y;
        })
    })
    return sum;
};