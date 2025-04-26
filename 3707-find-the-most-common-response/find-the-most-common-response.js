/**
 * @param {string[][]} responses
 * @return {string}
 */
var findCommonResponse = function(responses) {
    
    let fres = [];
    let arr = [];
    for(let i = 0; i<responses.length; i++){
        let set = new Set(responses[i]);
        arr.push([...set]);
    }

    // console.log(arr);
    let map = {};

    arr.map((a,i) => {
        a.map(key => {
            if(map[key]){
                map[key]++;
            }else{
                map[key] = 1;
            }
        })
    });

    let res = Object.entries(map);
    res.sort((a,b) => {
        if(a[1] == b[1]){
            return a[0] > b[0] ? 1 : -1;
        }
        return a[1] > b[1] ? -1 : 1 ;   
    });

    // console.log(res);

    return res[0][0];
};