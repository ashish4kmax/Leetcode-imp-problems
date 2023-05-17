/**
 * @param {Function[]} functions
 * @param {number} n
 * @return {Function}
 */
var promisePool = async function(functions, n) {
    let currentIndex = 0
    const next = async () => {
        const f = functions[currentIndex++]
        if (f) {
            await f();
            return next()
        }
    }

    await Promise.all(functions.slice(0,n).map(next))
};

/**
 * const sleep = (t) => new Promise(res => setTimeout(res, t));
 * promisePool([() => sleep(500), () => sleep(400)], 1)
 *   .then(console.log) // After 900ms
 */
