/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(letters, target) {
    
    let char = letters[0];
   for(let i = 0; i<letters.length; i++){
        if(letters[i] > target){
            char = letters[i];
            break;
        }
    }
    return char;
};