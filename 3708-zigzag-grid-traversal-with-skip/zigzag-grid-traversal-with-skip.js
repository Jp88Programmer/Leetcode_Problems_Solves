/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var zigzagTraversal = function(grid) {
    
    let row = 0, j = 0;
    let m = grid.length; 
    let n = grid[0].length ;
    let res = [];
    let id = 0;
    while(row < m){

        for(let col = 0; col < n; col++){
            let num = grid[row][col];
            if(id % 2 == 0){
                res.push(num);
            }
            id++;
        }

        row++;
        if(row < m){
            for(let col = n-1; col>=0; col--){
                let num = grid[row][col];
                if(id % 2 == 0){
                    res.push(num);
                }
                id++;
            }
        }

        row++;
    }

    return res;
};