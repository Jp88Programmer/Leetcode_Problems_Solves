/**
 * @param {number[]} ratings
 * @return {number}
 */
var candy = function(r) {
    
    let n = r.length;
    let left = new Array(n).fill(1);
    let right = new Array(n).fill(1);
    
    //only check with left and right side neighbour 
    
    for(let i = 1; i<n; i++){
        if(r[i] > r[i-1])
            left[i] = 1 + left[i-1];
    }
    
    for(let i = n-2; i>=0; i--){
        if(r[i] > r[i+1])
            right[i] = 1+right[i+1];
    }
    
    let ans = 0;
    for(let i = 0; i<n; i++){
        ans += Math.max(left[i],right[i]);
    }
    
    return ans;
};