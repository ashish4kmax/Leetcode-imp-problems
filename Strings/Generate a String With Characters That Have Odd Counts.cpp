class Solution {
public:
    string generateTheString(int n) {
        string s;
        // for getting an odd counts char string what we do is if n is even then n-1 is odd and 1 in itself is odd count.
        if(n%2==0) {
            for(int i=0;i<n-1;i++) {
                s+='a';
            }
            s+='b';
            return s;
        }
        // And if n is odd as its already odd we just repeat the same char that many times.
        else {
            for(int i=0;i<n;i++) {
                s+='a';
            }
            return s;
        }
    }
};
