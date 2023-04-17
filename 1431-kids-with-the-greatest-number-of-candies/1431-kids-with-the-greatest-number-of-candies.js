/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    
    let maxelement = Math.max(...candies);
    let ans = [];
    candies.forEach((e)=>{
        if(maxelement <= e + extraCandies)
            ans.push(true);
        else
            ans.push(false);
    })
    return ans;
};