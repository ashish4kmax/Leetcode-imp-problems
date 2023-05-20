/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {
    var last = -1;
    var time = null;
    return function(...args) {
        var currT = Date.now();
        if(currT - last >= t) {
            fn(...args);
            last = currT;
        }
        else {
            clearTimeout(time);
            time= setTimeout(()=>{
                fn(...args);
                time = null;
                last += t;
            }, last+t-currT);
        }
    }
};



/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */
