function isPrefixString(s: string, words: string[]): boolean {
    let com = "",res = "";

    for(let i = 0; i<words.length; i++){
        let word = words[i];
        if(s.includes(word) && s.includes(com + word)){
            res += word;
        }
        com += word;
    }
        
    return s == res;
};