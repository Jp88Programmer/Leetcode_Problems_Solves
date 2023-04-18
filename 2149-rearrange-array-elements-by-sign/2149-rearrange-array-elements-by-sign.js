/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
    
    let pos = [];
    let neg = [];
    
    nums.forEach(e => {
        if(e > 0)
            pos.push(e);
        else
            neg.push(e);
    })
    
    let ans = [];
    let i = 0;
    while(i < pos.length && i < neg.length){
        ans.push(pos[i]);
        ans.push(neg[i]);
        i++;
    }
    return ans;
};