/**
 * @param {Array} arr
 * @return {Generator}
 */
 
var inorderTraversal = function*(arr) {
    const n = arr.length;
    for(var i=0;i<n;i++) {
        if(Array.isArray(arr[i]) && arr[i].length) {
            yield * inorderTraversal(arr[i]);
        }
        else if(! Array.isArray(arr[i])) {
            yield arr[i];
        }
    }
};

/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */
