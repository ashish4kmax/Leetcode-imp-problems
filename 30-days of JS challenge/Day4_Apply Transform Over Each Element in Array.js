/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    // We apply the function and transform the value and store it in the same array after the function fn() execution.
    for(let i=0;i<arr.length;i++) {
        arr[i]=(fn(arr[i],i));
    }
    return arr;
};
