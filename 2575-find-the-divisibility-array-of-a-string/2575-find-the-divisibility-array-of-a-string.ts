function divisibilityArray(word: string, m: number): number[] {
    
    let res : number[] = new Array(word.length).fill(0);
    let num : number = 0;
    
    for(let i = 0; i<word.length; i++){
        num = (num * 10 + parseInt(word[i])) %  m;
        if(num === 0){
            res[i] = 1;
        }
    }
    
    return res;
};