class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>prem;
        // As per question its basically a high low value insert.
        // If we encounter I we insert low values starting from 0 to n where 'n' is input string length.
        // And if we encounter D we will have high values starting fron n to 0.
        int n=s.length();
        int k=0;
        for(int i=0;i<s.length();i++) {
            if(s.at(i)=='I') {
                // As we encounter high we insert 0 and ++ it.
                prem.push_back(k++);
            }
            else {
                // If D then n-- it.
                prem.push_back(n--);
            }
        }

        // Now at the end we will end up with k and n both with same value that is the remaining 0 to n values so we insert that in prem vector.
        prem.push_back(k);
        return prem;
    }
};
