class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int size=0;
        // We use stack to find max nesting depth.
        vector<char>stack;
        for(int i=0;i<s.length();i++) {
            if(s.at(i)=='(') {
                stack.push_back(s.at(i));
                size = stack.size();
                // now this max is used to get the maximum possible depth after pushing parenthesis to stack.
                res = max(res, size);
            }
            else if(s.at(i)==')') {
                stack.pop_back();
            }
        }

        return res;
    }
};
