/**
 * @param {Function} fn
 */
function memoize(fn) {
    const map = new Map();
    return function(...args) {
        if(!map.has(`${args[0]}#${args[1]}`)){
            const val = fn(args[0],args[1]);
            map.set(`${args[0]}#${args[1]}`,val);
            return val;
        }else{
            return map.get(`${args[0]}#${args[1]}`);
        }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */