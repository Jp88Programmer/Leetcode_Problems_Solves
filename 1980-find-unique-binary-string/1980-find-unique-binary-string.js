/**
 * @param {string[]} nums
 * @return {string}
 */
var findDifferentBinaryString = function(nums) {
    
    let ml = 0;
    let dec = nums.map(n =>{
        if(n.length>ml)
            ml = n.length;
        return parseInt(n,2);
    });
    let ans = new Array(17).fill(0);
    dec.map(d => ans[d] = 1);
    let str = "";
    for(let i = 0; i<ans.length; i++){
        if(ans[i] === 0){
            str = i.toString(2);
            break;
        }
    }
    if(ml>str.length){
        return new Array(ml-str.length).fill('0').join("") + str;
    }
    return str;
};