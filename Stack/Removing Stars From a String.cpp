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


/* Using two pointers 

string removeStars(string s) {
    int j = 0;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == '*')
            j--;
        else 
            s[j++] = s[i];
    return s.substr(0, j);
}

*/
