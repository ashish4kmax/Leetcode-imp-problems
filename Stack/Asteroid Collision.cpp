class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n = ast.size();
        vector <int> s;
        
        for(int i = 0; i < n; i++) {
            if(ast[i] > 0 || s.size()==0) {
                s.push_back(ast[i]);
            }
            else {
                while(s.size()>0 && s[s.size()-1] > 0 && s[s.size()-1] < abs(ast[i])) {
                    s.pop_back();
                }
                if(s.size()>0 && s[s.size()-1] == abs(ast[i])) {
                    s.pop_back();
                }
                else {
                    if(s.size()==0 || s[s.size()-1] < 0) {
                        s.push_back(ast[i]);
                    }
                }
            }
        }
		
        vector<int> res(s.size());
        for(int i = (int)s.size() - 1; i >= 0; i--) {
            res[i] = s[s.size()-1];
            s.pop_back();
        }
        return res;
    }
};
