/**
 * @param {string} s
 * @return {number}
 */
var maxDifference = function(s) {
    
    let fr = {};
    s.split("").map(str => {
        if(fr[str]){
            fr[str]++;
        }else{
            fr[str] = 1;
        }
    });

    let odds = [],evens = [];

    Object.values(fr).map(val => {
        if(val % 2 == 0){
            evens.push(val);
        }else{
            odds.push(val);
        }
    });

    odds.sort((a,b) => b - a);
    evens.sort((a,b) => a - b);

    return odds[0] - evens[0];

    
};