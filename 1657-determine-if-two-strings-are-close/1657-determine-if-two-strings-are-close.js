/**
 * @param {string} word1
 * @param {string} word2
 * @return {boolean}
 */
var closeStrings = function(word1, word2) {
    
    let m = new Map();
    let mn = new Map();
    
    for(let ch of word1){
        if(m.has(ch)) m.set(ch,m.get(ch)+1);
        else m.set(ch,1);
    }
    
    for(let ch of word2){
        if(mn.has(ch)) mn.set(ch,mn.get(ch)+1);
        else mn.set(ch,1);
    }
     
    let arr1  = [];
    for(let [key,value] of m) arr1.push(value);
    
    let arr2 = [];
    for(let [key,value] of mn) arr2.push(value);
    
    arr1.sort();
    arr2.sort();
    
    if(arr1.length != arr2.length) return false;
    
    for(let ch of word1) if(!mn.has(ch)) return false
    for(let ch of word2) if(!m.has(ch)) return false

    for(let i = 0; i<arr1.length; i++)
        if(arr1[i] != arr2[i]) return false;
    
    return true;
    
};