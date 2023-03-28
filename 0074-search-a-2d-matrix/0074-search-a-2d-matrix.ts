function searchMatrix(matrix: number[][], target: number): boolean {
    
    let m : number = matrix.length;
    let n : number = matrix[0].length;
    let s = 0, e = m * n -1;
    
    while(s <= e){
        let midIndex = Math.floor((s + e) / 2);
        let midVal = matrix[Math.floor(midIndex / n)][midIndex % n];
        if(midVal == target)
            return true;
        else if (midVal < target)
            s = midIndex + 1;
        else
            e = midIndex - 1;
    }
    
    return false;
};