/**
 * @param {string} s
 * @param {number[]} spaces
 * @return {string}
 */
var addSpaces = function(s, spaces) {
    
    let arr = [];
    for(let i = 0; i<spaces.length; i++){
        let spNum = spaces[i];
        let prespNum = spaces[i-1] || 0;
        if(spNum == 0){
            arr.push("");
        }else{
            let sub = s.substring(prespNum,spNum); 
            arr.push(sub);
        }
        if(spNum == spaces[spaces.length -1] && spNum < s.length){
            let sub = s.substring(spNum); 
            arr.push(sub);
        }
    }
    return arr.join(" ");
};