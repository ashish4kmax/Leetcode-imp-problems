/**

 * @param {Function} fn

 */

function memoize(fn) {

    var cache={}

    return function(...args) {

        var key = JSON.stringify(args);

        if(key in cache) {

            return cache[key];

        }

        else {

            

           var result = fn(...args);

           cache[key] = result;

           return result;

        }

    }

}

/** 

 * let callCount = 0;

 * const memoizedFn = memoize(function (a, b) {

 *	 callCount += 1; *   return a + b;

 * })

 * memoizedFn(2, 3) // 5

 * memoizedFn(2, 3) // 5

 * console.log(callCount) // 1 

 */
