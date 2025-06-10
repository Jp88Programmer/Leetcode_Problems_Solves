function maxDifference(s: string): number {
     let fr: Record<number,number> = {};
    s.split("").map(str => {
        if(fr[str]){
            fr[str]++;
        }else{
            fr[str] = 1;
        }
    });

    let odds = [],evens = [];

    Object.values(fr).map(val => {
        if(val % 2 == 0){
            evens.push(val);
        }else{
            odds.push(val);
        }
    });

    odds.sort((a:number,b:number) => b - a);
    evens.sort((a:number,b:number) => a - b);

    return odds[0] - evens[0];
};