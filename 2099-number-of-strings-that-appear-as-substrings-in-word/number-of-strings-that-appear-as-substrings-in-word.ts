function numOfStrings(patterns: string[], word: string): number {
     let count = 0;
    patterns.map((p,i) => {
        if(word.includes(p))
            count++;
    })
    return count;
};