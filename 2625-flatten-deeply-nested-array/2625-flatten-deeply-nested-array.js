/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    
    let i = 0,j = 0;
    function flatternarr(arr,i,j,n){
        if(i === n){
            return arr;
        }
       
        let ans = [];
        i++;
        arr.map(e => {
            if(Array.isArray(e)){
                ans.push(...flatternarr(e,i,j,n));
            }else{
                ans.push(e);
                j++;
            }
        })
        
        return ans;
    }
    return flatternarr(arr,i,j,n);
};