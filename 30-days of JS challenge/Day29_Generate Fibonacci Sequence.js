/**
 * @return {Generator<number>}
 */
//-----------------------------------Optimal code(Shorter Code)-------------------------------
var fibGenerator = function*() {
    let a = 0;
    let b = 1;

    while(true) {
        yield a;
        [a,b] = [b, a+b];
    }
};

//-----------------------------------Normal or Naive solution---------------------------------
/*
var fibGenerator = function*() {
    var a = 0
    var b = 1
    yield a
    yield b
    while(true) {
        var c = a + b
        yield c
        a = b
        b = c
    }
};
*/
/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
