class Solution {
public:
    bool checkPowersOfThree(int n) {
        // As it's given all powers of 3 need to be distinct so there would be no possible way that a ternary will have a 2 or higher as it's multiplier 
        while(n>0) {
            // here we check if any multiplier is >2 we return false.
            if(n%3>1) return false;
            n/=3;
        }   
        // else the no. can be defiend as a power of three.
        return true;
    }
};
