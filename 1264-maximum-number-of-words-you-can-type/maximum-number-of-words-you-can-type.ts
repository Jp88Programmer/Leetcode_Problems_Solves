function canBeTypedWords(text: string, brokenLetters: string): number {
        let count = 0;
        text.split(" ").map(t => {
            for(let i = 0; i<brokenLetters.length; i++){
                let str = brokenLetters.charAt(i);
                if(t.includes(str)){
                    count++;
                    break;
                }
            }
        })
        return text.split(" ").length - count;
};