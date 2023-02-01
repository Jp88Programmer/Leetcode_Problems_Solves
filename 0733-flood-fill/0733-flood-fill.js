/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} color
 * @return {number[][]}
 */
var dfs = function(ans,arr,n,m,startColor,sr,sc,color){
        ans[sr][sc] = color;
        let dr =[-1,0,1,0];
        let dc = [0,-1,0,1];
        
        for(let i = 0; i<4; i++){
            let x = sr+dr[i];
            let y = sc+dc[i];
            
            if(x >= 0 && x < n && y >= 0 && y < m && ans[x][y] == startColor && ans[x][y] != color)
                dfs(ans,arr,n,m,startColor,x,y,color);
        }
    }

var floodFill = function(arr, sr, sc, color) {
        
        let ans = arr;
        let n = arr.length;
        let m = arr[0].length;
        dfs(ans,arr,n,m,arr[sr][sc],sr,sc,color);
        return ans;
};