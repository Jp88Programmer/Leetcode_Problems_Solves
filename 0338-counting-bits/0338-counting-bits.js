/**
 * @param {number} n
 * @return {number[]}
 */
var countbit = function(n){
    let count = 0;
        while(n){
            if(n&1)
                count++;
            n>>=1;
        }
        return count;
}
var countBits = function(n) {
    let ans = [];
        for(let i = 0; i<=n; i++){
            ans.push(countbit(i));
        }
        return ans;
};