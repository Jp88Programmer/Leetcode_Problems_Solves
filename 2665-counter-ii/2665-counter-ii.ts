type ReturnObj = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): ReturnObj {
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