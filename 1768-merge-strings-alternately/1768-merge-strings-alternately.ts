function mergeAlternately(word1: string, word2: string): string {
    
    let ans = [];
    
    let i = 0;
    while(i < word1.length && i < word2.length){
        ans.push(word1.charAt(i));
        ans.push(word2.charAt(i));
        i++;
    }
    
    while(i<word1.length){
        ans.push(word1.charAt(i));
        i++;
    }
    while(i<word2.length){
        ans.push(word2.charAt(i));
        i++;
    }
    return ans.join('');
};