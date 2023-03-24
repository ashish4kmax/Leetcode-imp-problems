class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int res=0;
        for(int i=0;i<s.length();i++) {
            // We use count to know that weather it's a pair or not. 
            if(s.at(i)=='|') {
                count++;
            }

            // If the count value is odd then definietly a pair has started so now we make condition that
            // if count value is even then only we count the asterisks else we don't.
            if(count%2==0) {
                if(s.at(i)=='*') {
                    res++;
                }
            }
        }

        return res;      
    }
};
