function maximizeWin(prizePositions: number[], k: number): number {
    
    let n : number = prizePositions.length;
    let dp : number[] = new Array(n+1).fill(0);
    let j : number = 0,res : number = 0;
    
    for(let i = 0; i<n; i++){
        
        while(prizePositions[j] < prizePositions[i] - k)
            j++;
        
        dp[i+1] = Math.max(dp[i],i-j+1);
        res = Math.max(res,i-j+1+dp[j]);
    }
    
    return res ;
};