/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
var countCharacters = function(words, chars) {
    
    const map1 = new Map();
    let map2 ;
    let char = chars.split("").map(ch => {
        map1.set(ch,map1.has(ch) ? map1.get(ch) + 1:1)
        return ch
    });
    let ans = 0;
    words.map(word => {
        map2 = new Map(map1);
        let len = 0;
        for(let i = 0; i<word.length; i++){
            if(map2.has(word.charAt(i))){
                map2.set(word.charAt(i), map2.get(word.charAt(i)) - 1);
                len++;
                if(map2.get(word.charAt(i)) == 0)
                    map2.delete(word.charAt(i));
            }
            if(len === word.length){
                ans += len;
            }
        }
    })
    
    return ans;
    
};