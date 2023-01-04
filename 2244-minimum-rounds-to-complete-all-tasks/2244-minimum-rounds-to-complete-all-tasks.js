/**
 * @param {number[]} tasks
 * @return {number}
 */
var minimumRounds = function(tasks) {
    
    const m = new Map();
    console.log(m);
    
    tasks.map((e) => {
        m.set(e,1 + ( m.get(e) || 0));
    });
    
    let ans = 0;
    for(let [key,value] of m){
        if(value === 1) return -1;
        if(value % 3 == 0) ans += Math.floor(value/3);
        if(value % 3 == 1) ans += Math.floor(value/3) -1 + 2;
        if(value % 3 == 2) ans += Math.floor(value/3) + 1;
    }
    return ans;
};