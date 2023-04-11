/**
 * @param {string} s
 * @return {string}
 */
var removeStars = function(s) {
    
    const strs = [];
    for(let i = 0; i<s.length; i++){
        
        if(s.charAt(i) === '*'){
            strs.pop();
        }else{
            strs.push(s.charAt(i))
        }
    }
    return strs.join('');
};