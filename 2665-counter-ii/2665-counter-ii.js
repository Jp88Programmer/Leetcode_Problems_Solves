/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let state = init;
    return {
        increment : function(){
            return ++state;
        },
        decrement : function(){
            return --state;
        },
        reset : function(){
            state = init
            return state;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */