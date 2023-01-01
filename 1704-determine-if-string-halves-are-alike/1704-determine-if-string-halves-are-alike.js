/**
 * @param {string} s
 * @return {boolean}
 */
var isVowel = function(ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
            return true;
        return false;
    }

var halvesAreAlike = function(s) {
    
    let n = s.length ;
    
    let cv1 = 0,cv2 = 0;
    for(let i = 0; i<n/2; i++){
        if(isVowel(s[i])) cv1++;
    }
    
    for(let i = n/2; i<n; i++){
        if(isVowel(s[i])) cv2++;
    }
    
    return cv1 === cv2
};