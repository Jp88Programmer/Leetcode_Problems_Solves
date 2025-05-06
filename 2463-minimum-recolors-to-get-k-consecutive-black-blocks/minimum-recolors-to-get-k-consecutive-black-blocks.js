/**
 * @param {string} blocks
 * @param {number} k
 * @return {number}
 */
var minimumRecolors = function(blocks, k) {
    
    let res = k,count = 0;
    for(let i = 0;i<blocks.length; i++){
        let block = blocks.charAt(i);
        if(block == 'W') count++;
        if(i >= k && blocks.charAt(i-k) == "W") count--;
        if((i+1) >= k) res = Math.min(res,count);
    }
    return Math.min(res,count);
};