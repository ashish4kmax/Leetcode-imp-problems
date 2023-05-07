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
//1.

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
/*
var createCounter = function(init) {
    let value=init;

    return {
        increment:()=>++value,  // If our code just want a single line functionality!!
        decrement:()=>--value,
        reset:()=>value=init, 
    }
};
 */
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */

// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// One more way to do it declaring the object as a functiom//
//2.

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
/*
var createCounter = function(init) {
    var counter = init; 
    return {
        // Returning an object as a function if you want more than one line of functionality!!.
        increment: function() {
            return ++counter;
        },
        decrement: function() {
            return --counter;
        },
        reset: function() {
            return counter=init;
        }
    }
};
*/
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
