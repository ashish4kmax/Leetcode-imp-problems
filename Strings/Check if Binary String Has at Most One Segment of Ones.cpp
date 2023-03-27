class Solution {
public:
    bool checkOnesSegment(string s) {
        // We make two empty string ones and zeroes.
        // As given in the question a binary string to have at most one segment ones.
        // That means that if (consec 1s string + consec 0s string) == s then only the binary string has one segment.
        // And it's always true.
        string ones;
        string zeros;

        int i;
        // So, in this for loop we make consec1s string ones.
        for(i=0;i<s.length();i++) {
            if(s.at(i)=='1') {
                ones+=s.at(i);
            }
            else {
                break;
            }
        }

        // And here for consec0s.
        for(int j=i;j<s.length();j++) {
            if(s.at(j)=='0') {
                zeros+=s.at(j);
            }
            else {
                break;
            }
        } 

        // if (ones+zeros == s) then only it's true or else its always false.
        if(s == (ones+zeros)) {
            return true;
        }
        else {
            return false;
        }
    }
};
