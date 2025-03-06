/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function(grid) {
    let n = grid.length;
    let ans = new Array(n*n + 1).fill(0);
    
    for(let i = 0; i<grid.length; i++){
        for(let j = 0; j<grid[i].length; j++){
            ans[grid[i][j]]++;
        }
    }
    
    let res = [0,0];
    console.log(ans);
    for(let i = 1; i<ans.length; i++){
        if(ans[i] == 2){
            res[0] = i;
        }
        else if(ans[i] == 0){
            res[1] = i;
        }
    }
    return res;
};