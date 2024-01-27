/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParityII = function(nums) {
    let even = [],odd = [];
    nums.map(n => {
        if(n % 2 == 0)
            even.push(n);
        else
            odd.push(n);
    })
    
    let ans = [];
    let e = 0,o = 0;
    nums.map((n,i)=>{
        if(i % 2 == 0)
            ans.push(even[e++]);
        else
            ans.push(odd[o++]);
    })
    
    return ans;
};