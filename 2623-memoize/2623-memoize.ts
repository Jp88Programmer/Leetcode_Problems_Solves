type Fn = (...params: number[]) => number

function memoize(fn: Fn): Fn {
    let cache = {};
    return function(...args) {
        if(cache[args.join(",")] != undefined){
            return cache[args.join(",")];
        }else{
            let ans = fn(...args);
            cache[args.join(",")] = ans;
            return ans;
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