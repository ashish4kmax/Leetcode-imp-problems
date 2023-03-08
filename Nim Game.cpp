class Solution {
public:
    bool canWinNim(int n) {
        // Pretty simple code for this in nin game we know that all the multiples of 4 will not make you win as you are choosing first the no. of stones from 1 to 3 and 
        //evertime when it croses multiple of 4 value your friend edges out and wins the game.
        if(n%4==0) {
            return false;
        }
        else {
            return true;
        }
    }
};
