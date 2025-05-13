/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var minDeletion = function(s, k) {
    
    let fr = {};
    for(let i = 0; i<s.length; i++){
        if(fr[s.charAt(i)]){
            fr[s.charAt(i)]++;
        }else{
            fr[s.charAt(i)] = 1;
        }
    }

    let arr = Object.entries(fr).sort((a,b) => a[1] - b[1]);

    let rl = arr.length - k;
    if(rl <= 0) return 0;

    let op = 0;
    for(let i = 0; i<rl; i++)
        op += arr[i][1];

    return op;

};