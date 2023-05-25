/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    var array = [];
    var chunk = [];
    var count=0;
    if(arr.length==0) {
        return array;
    }
    for(var i=0;i<arr.length;i++) {
        if(count==size) {
            array.push(chunk);
            chunk = [];
            count=0;
        }
        chunk.push(arr[i]);
        count++;
    }
    array.push(chunk);
    return array;
};
