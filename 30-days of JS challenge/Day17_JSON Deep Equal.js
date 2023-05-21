/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
var areDeeplyEqual = function(o1, o2) {
    if (o1 === o2) return true;
    if (typeof o1 != 'object' || typeof o2 != 'object') return false;

    if (Array.isArray(o1) !== Array.isArray(o2)) return false;
    
    if (Object.keys(o1).length != Object.keys(o2).length) return false;

    for (const key in o1) {
        if (!areDeeplyEqual(o1[key], o2[key])) return false;
    }

    return true;
};


/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
/*
// Using functions
var areDeeplyEqual = function(o1, o2) {
    if(_.isEqual(o1,o2)) {
        return true;
    }
    else {
        return false;
    }
};
*/
