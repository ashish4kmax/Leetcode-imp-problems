class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int open=0;
        // The openened is used to check weather its the opening of first parethesis or not.
        for(char c:s) {
            // This is adding of after first parenthesis primitive decomposition.
            if(c=='(' && open++>0) {
                res+=c;
            }
            // This is adding of before last parenthesis primitive decomposition.
            if(c==')' && open-->1) {
                res+=c;
            }
        }
        return res;
    }
};
