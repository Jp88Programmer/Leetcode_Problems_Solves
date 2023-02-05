/**
 * @param {string[]} words
 * @param {number[][]} queries
 * @return {number[]}
 */
var isVowel = (ch) => {
        if(ch === 'a' || ch === 'e' || ch === 'i' || ch === 'o' || ch === 'u')
            return true;
        return false;
    }
    
var vowelStrings = function(words, queries) {
    
    let ans = [];
    let arr = [0];
    
    words.forEach((w)=>{
        if(isVowel(w[0]) && isVowel(w[w.length-1])){
            arr.push(arr[arr.length-1]+1);
        }else{
            arr.push(arr[arr.length-1]);
        }
    })
    
    queries.forEach((q)=>{
        ans.push(arr[q[1]+1] - arr[q[0]])
    })
    
    return ans;
};