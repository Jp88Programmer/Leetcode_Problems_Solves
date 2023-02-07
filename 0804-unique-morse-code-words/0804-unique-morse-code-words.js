/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function(words) {
    
    let morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
    
    let map = new Map();
    
    words.map((w)=>{
        
        let str = ""
        for(let i in w){
            str += morse[w.charCodeAt(i)-97]
        }
        
        map.set(str,map.get(str) ? map.get(str) + 1 : 1);
    })
    
    return map.size;
};