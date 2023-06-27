/**
 * @param {string[]} words
 * @param {string} target
 * @param {number} startIndex
 * @return {number}
 */
var closetTarget = function(words, target, startIndex) {
    
 
   let l = startIndex,r = startIndex;
    let res = 0;
    let n = words.length;
    let visited = new Array(n).fill(false);
    console.log(visited)
    while(!visited[l] && !visited[r]){
        if(words[l] === target || words[r] === target){
            return res;
        }
        visited[l] = true;
        visited[r] = true;
        l--;
        r++;
        res++;
        l = l == -1 ? n - 1 : l;
        r = r == n ? 0 : r;
    }
    return -1;
};