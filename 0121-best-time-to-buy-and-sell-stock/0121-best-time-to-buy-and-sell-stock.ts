function maxProfit(prices: number[]): number {
    let buy=prices[0];
    let maxProfit = 0;
    for(let i = 1; i<prices.length; i++){
        maxProfit = Math.max(maxProfit,prices[i] - buy);
        buy = Math.min(prices[i],buy);
    }
    return maxProfit;
};