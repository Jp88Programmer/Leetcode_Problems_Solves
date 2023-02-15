/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */
var addToArrayForm = function(num, k) {
    
    let str = ""
    num.map((e)=>{
        str += e;
    })
    let ans = [];
    let sn = k.toString();
    let i = str.length-1,j = sn.length-1;
    let carr = 0;
    while(i>=0 && j >= 0){
        let pr = parseInt(str[i--]) + parseInt(sn[j--]) + carr;
        carr = Math.floor(pr/10);
        ans.unshift(Math.floor(pr%10));
        
    }
    
    while(i>=0){
        let pr = parseInt(str[i--]) + carr;
        carr = Math.floor(pr/10);
        ans.unshift(Math.floor(pr%10));
    }
    
    while(j>=0){
        let pr = parseInt(sn[j--]) + carr;
        carr = Math.floor(pr/10);
        ans.unshift(Math.floor(pr%10));
    }
    
    if(carr != 0){
        ans.unshift(carr);
    }
    
    return ans;
};