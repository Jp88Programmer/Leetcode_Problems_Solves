/**
 * @param {number[]} spells
 * @param {number[]} potions
 * @param {number} success
 * @return {number[]}
 */
var successfulPairs = function(spells, potions, success) {
    
    // spells.sort((a,b)=> a - b);
    potions.sort((a,b)=> a - b);
    
    let ans = [];
    let m = spells.length;
    let n = potions.length;
    
    console.log(potions)
    for(let i = 0; i<m ; i++){
        
        if(potions[n-1]*spells[i]<success){
            ans.push(0);
            continue;
        }
        let s = 0, e = n - 1;
        
        while(s < e){
            let mid = s + Math.floor((e - s) / 2);
            if(potions[mid]*spells[i]>=success){
                e = mid;
            }else{
                s = mid+1;
            }
        }
        
        console.log(e,s)
        // if(s < n){
            ans.push(n - s);
        // }
        
    }
    return ans;
};