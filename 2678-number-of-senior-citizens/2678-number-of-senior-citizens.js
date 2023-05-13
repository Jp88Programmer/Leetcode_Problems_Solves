/**
 * @param {string[]} details
 * @return {number}
 */
var countSeniors = function(details) {
    
    let count = 0;
    details.map((s)=>{
        let str = s.substring(11,13);
        if(parseInt(str) > 60)
            count++;
    })
    return count;
};