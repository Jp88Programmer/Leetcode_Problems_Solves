function countOdds(low: number, high: number): number {
    let diff:number = high - low + 1;
    let res = Math.floor(diff/2);
    let resOdd : number = res + 1;
    if(Math.floor(diff % 2) === 0){
        return  res;
    }else{
        if(Math.floor(low % 2) === 0){
            return res;
        }else{
            return res + 1;
        }
    }

};