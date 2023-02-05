/**
 * @param {number[]} gifts
 * @param {number} k
 * @return {number}
 */
var pickGifts = function(gifts, k) {
    
    gifts.sort((a,b)=> b-a);
    
    for(let i = 0; i<k; i++){
        let index=gifts.indexOf(Math.max(...gifts));
        gifts[index] = Math.floor(Math.sqrt(gifts[index]));
    }
    
    // console.log(gifts)
    return gifts.reduce((acc,ele)=> acc+ele);
};