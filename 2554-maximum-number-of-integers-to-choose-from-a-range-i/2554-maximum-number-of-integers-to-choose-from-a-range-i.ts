function maxCount(banned: number[], n: number, maxSum: number): number {
    
    let m  = new Set(banned);
    let sum : number = 0,count : number = 0;
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
};