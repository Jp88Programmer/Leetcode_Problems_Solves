/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    
    let arr = [];
    words.map(w => {
        let a = w.split(separator);
        if(a.length){
            a.map(e => {
                if(e)
                    arr.push(e);
            })
        }
        else
            arr.push(w);
    })
    return arr;
};