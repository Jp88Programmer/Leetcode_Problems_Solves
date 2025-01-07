/**
 * @param {string[]} words
 * @return {string[]}
 */
var stringMatching = function(words) {
    
    const res = [];
    const set = new Set();
    for(let i = 0; i<words.length; i++){
        for(let j = 0; j<words.length; j++){
            if(i == j) continue;

            if(words[i].length < words[j].length){
                if(words[j].includes(words[i]))
                    // res.push(words[i]);
                    set.add(words[i]);
            }
        }
    }



    return [...set];
};