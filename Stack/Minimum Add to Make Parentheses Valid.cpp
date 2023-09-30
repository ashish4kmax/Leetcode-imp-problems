class Solution {
public:
    int minAddToMakeValid(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = s.length();
        stack<char>stk;
        for(int i=0;i<n;i++) {
            if(s[i]==')') {
                if(stk.size()!=0 && stk.top()=='(') stk.pop();
                else stk.push(s[i]);
            }
            else stk.push(s[i]);
        }

        return stk.size();
    }
};
