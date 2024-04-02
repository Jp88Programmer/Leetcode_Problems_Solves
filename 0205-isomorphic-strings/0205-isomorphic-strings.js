/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    
    let alph1 = {};
    let alph2 = {};
    
    for(let i = 0; i<s.length; i++){
        const ch1 = s.charAt(i);
        const ch2 = t.charAt(i);
        alph1.hasOwnProperty(ch1) ?  alph1[ch1].push(i) : alph1[ch1] = [i]
        alph2.hasOwnProperty(ch2) ?  alph2[ch2].push(i) : alph2[ch2] = [i]
    }
    
    for(let i = 0; i<t.length; i++){
        const ch = t.charAt(i);
        Object.entries(alph1).map(([key,value]) => {
            if(value.length === alph2[ch].length && JSON.stringify(value) === JSON.stringify(alph2[ch])){
                alph1[key] = [];
                alph2[ch] = []
            }
        })
    }
    
    return JSON.stringify(Object.values(alph1)) == JSON.stringify(Object.values(alph2));
};