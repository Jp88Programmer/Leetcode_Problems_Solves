/**
 * @param {number[]} derived
 * @return {boolean}
 */
var doesValidArrayExist = function(derived) {
    
     let cnt = 0;
       derived.map((d)=>{
           if(d == 1)
               cnt++;
       })
        return cnt % 2 == 0;
};