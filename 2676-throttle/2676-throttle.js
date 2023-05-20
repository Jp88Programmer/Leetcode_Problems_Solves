/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {
  let wait = false,storeArgs = null;
  function check() {
      if(storeArgs == null){
          wait = false;
      }else{
          fn(...storeArgs)
          wait = true;
          storeArgs = null;
          setTimeout(check,t);
      }  
  }
      return function(...args){
           if(wait){
            storeArgs = args;
             return;
          }
          fn(...args)
          wait = true;
          setTimeout(check,t);
      }
        
  
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */