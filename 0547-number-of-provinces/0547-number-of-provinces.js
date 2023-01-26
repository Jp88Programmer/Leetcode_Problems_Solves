/**
 * @param {number[][]} isConnected
 * @return {number}
 */
var findCircleNum = function(m) {
    
    var v = new Set();
    
    let dfs = function(i){
        
        for(let j = 0; j<m.length; j++){
            if(m[i][j] && !v.has(j)){
                v.add(j);
                dfs(j);
                
            }
        }
        
        
    }
    
    let cnt = 0;
        for(let i = 0; i<m.length; i++){
            if(!v.has(i)){
                cnt++;
                dfs(i);
            }
        }
    return cnt;
};