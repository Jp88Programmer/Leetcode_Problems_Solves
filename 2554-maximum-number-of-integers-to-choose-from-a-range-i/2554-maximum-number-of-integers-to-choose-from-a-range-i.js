/**
 * @param {number[]} banned
 * @param {number} n
 * @param {number} maxSum
 * @return {number}
 */
var maxCount = function(banned, n, maxSum) {
    
    
    let m = new Set(banned);
    let sum = 0,count = 0;
    for(let i = 1 ; i<=n ; i++){
        if(!m.has(i)){
            sum += i;
            if(sum <= maxSum)
                count++;
            else
                break;
            
        }
    }
    
    return count;
    
    /*
    let sum = 0,count = 0;
    
    for(let i = 1 ;i<=n; i++){
        if(!banned.includes(i) && sum + i <= maxSum){
            sum += i;
            count++;
        }
    }
    return count;
    */
    
};