function findWordsContaining(words: string[], x: string): number[] {
    let arr = [];
    words.map((word,i) => {
        if(word.includes(x))
            arr.push(i);
    })

    return arr;
};