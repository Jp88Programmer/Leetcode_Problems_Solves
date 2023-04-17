function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
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