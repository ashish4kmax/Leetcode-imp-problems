/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var array = [];
    for(var i=0;i<arr.length;i++) {
        if(fn(arr[i],i)) {
            array.push(arr[i]);
        }
    }
    return array;
  
    // or else there is a one liner too that is :-
    // return arr.filter(fn);
    /* 
    But the reason we are not using this one liner is to more of understand what the problem is intended to do and write the full logic instead of simply using cut short method but 
    if you are well aware of these logics you can use the array.filter() function as well.
    */
};
