/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
    
    let ind=0,dec=s.length;
    let res = [];
    for(let str of s.split("")){
        if(str == 'I')
            res.push(ind++);
        else
            res.push(dec--);
    }
    
    res.push(ind)
    return res;
    
};