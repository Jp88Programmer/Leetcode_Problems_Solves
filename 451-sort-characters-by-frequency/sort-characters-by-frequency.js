/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    
    let fr = {};

    for(let i = 0; i<s.length; i++){
        if(fr[s.charAt(i)]){
            fr[s.charAt(i)]++;
        }else{
            fr[s.charAt(i)] = 1;
        }
    }

    let arr = Object.entries(fr).sort((a,b) => b[1] - a[1]);

    let res = "";

    for(let i = 0; i<arr.length; i++){
        let str = "";
        let val = arr[i][1];
        for(let j = 0; j<val; j++){
            str += arr[i][0];
        }
        res += str;
    }

    return res;
};