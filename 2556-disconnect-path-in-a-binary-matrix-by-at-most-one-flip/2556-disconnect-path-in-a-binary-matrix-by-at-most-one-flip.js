/**
 * @param {number[][]} grid
 * @return {boolean}
 */
var isPossibleToCutPath = function(grid) {
    let n = grid.length;
    let m = grid[0].length;
    
    let arr = new Array(m+n-1).fill(0);
    
    for(let i = 0; i<n; i++){
        for(let j = 0; j<m; j++){
            if(grid[i][j] == 1)
                arr[i+j]++;
        }
    }
    
    for(let i = 1; i < arr.length-1; i++){
        if(arr[i] <= 1) return true;
    }
    return false;
};