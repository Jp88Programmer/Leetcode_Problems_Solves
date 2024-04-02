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
        if(alph1.hasOwnProperty(ch1)){
            alph1[ch1].push(i);
        }else{
            alph1[ch1] = [i];
        }
        if(alph2.hasOwnProperty(ch2)){
            alph2[ch2].push(i);
        }else{
            alph2[ch2] = [i];
        }
    }
    
    for(let i = 0; i<t.length; i++){
        const ch = t.charAt(i);
        Object.entries(alph1).map(([key,value]) => {
            // console.log(value)
            if(value.length === alph2[ch].length && JSON.stringify(value) === JSON.stringify(alph2[ch])){
                alph1[key] = [];
                alph2[ch] = []
            }
        })
    }
    console.log(alph1,alph2);
    if(JSON.stringify(Object.values(alph1)) == JSON.stringify(Object.values(alph2)))
        return true;
    else 
        return false;
};