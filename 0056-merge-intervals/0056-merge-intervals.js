/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(int) {
    
    int.sort((a,b)=> a[0]-b[0]);
    let start = int[0][0];
    let end = int[0][1];
    let ans = [];
  
    ans.push([start,end]);
    if(int.length == 1)
        return ans;
    for(let i = 1; i<int.length; i++){
        if(ans[ans.length-1][0] <= int[i][1] && ans[ans.length-1][1] >= int[i][0]){
            start = Math.min(int[i][0],ans[ans.length-1][0]);
            end = Math.max(int[i][1],ans[ans.length-1][1])
            ans[ans.length-1][0] = start;
            ans[ans.length-1][1] = end;
        
        }else{
            ans.push([int[i][0],int[i][1]]);
            start = int[i][0];
            end = int[i][1];
        }
    }
    return ans;
};