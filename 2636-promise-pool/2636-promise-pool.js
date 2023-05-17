/**
 * @param {Function[]} functions
 * @param {number} n
 * @return {Function}
 */
var promisePool = async function(functions, n) {

   const results = [];
    
    async function exe(){
        if(functions.length === 0)
            return;
        const fn = functions.shift();
        const res = await fn();
        results.push(res);
        await exe();
    }
    
    const promiseArr = new Array(n).fill().map(exe);
    
    await Promise.all(promiseArr);
    
    return [results,results[results.length-1]];
    
};

/**
 * const sleep = (t) => new Promise(res => setTimeout(res, t));
 * promisePool([() => sleep(500), () => sleep(400)], 1)
 *   .then(console.log) // After 900ms
 */