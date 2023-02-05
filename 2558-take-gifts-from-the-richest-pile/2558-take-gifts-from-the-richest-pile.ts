function pickGifts(gifts: number[], k: number): number {
    
    gifts.sort((a,b)=> b-a);
    
    for(let i = 0; i<k; i++){
        let index=gifts.indexOf(Math.max(...gifts));
        gifts[index] = Math.floor(Math.sqrt(gifts[index]));
    }
    
    return gifts.reduce((acc,ele)=> acc+ele);
};