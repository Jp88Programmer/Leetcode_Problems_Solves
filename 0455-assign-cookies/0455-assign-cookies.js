/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    g.sort((a,b) => a-b );
    s.sort((a,b)=> a - b);
    let n = g.length,m = s.length,i=0;
    for(let j = 0;  i<n && j < m ; j++) if(s[j] >= g[i]) i++;
    return i;
};