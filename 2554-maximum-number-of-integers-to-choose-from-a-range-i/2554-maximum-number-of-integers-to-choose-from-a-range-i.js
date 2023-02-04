/**
 * @param {number[]} banned
 * @param {number} n
 * @param {number} maxSum
 * @return {number}
 */
var maxCount = function(banned, n, maxSum) {
    
    /*
    let m = new Map();
    
    for(let i = 0; i<banned.length; i++){
        if(m.get(banned[i]) === undefined)
            m.set(1);
        else
            m.set(m.get(banned[i])+1);
    }
    
    let sum = 0,count = 0;
    for(let i = 1 ; i<=n ; i++){
        if(!m.has(i)){
            sum += i;
            if(sum <= maxSum)
                count++;
            
        }
    }
    
    return count;
    */
    let sum = 0,count = 0;
    
    for(let i = 1 ;i<=n; i++){
        if(!banned.includes(i) && sum + i <= maxSum){
            sum += i;
            count++;
        }
    }
    return count;
};