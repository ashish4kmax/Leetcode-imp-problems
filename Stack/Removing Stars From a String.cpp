class Solution {
public:
    string removeStars(string s) {
        string ans;
        // We can use the concept of stack that is if we see a '*' char we pop_back() or else push to the new string.
        for(int i=0;i<s.length();i++) {
            if(s.at(i)=='*') {
                // pop because of '*' character!!.
                ans.pop_back();
            }
            else {
                // we push here.
                ans+=s.at(i);
            }
        }
        return ans;
    }
};
