// Naive
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var counter = init; 
    function increment() {
        return ++counter;
    }

    function decrement() {
        return --counter;
    }

    function reset() {
        return counter = init;
    }

    return {increment, decrement, reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */

// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// Optimized //

/*
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let value=init;

    return {
        increment:()=>++value,
        decrement:()=>--value,
        reset:()=>value=init, 
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
 */
