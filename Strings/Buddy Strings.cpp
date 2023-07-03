class Solution {
public:
    bool check(string temp) {
        set<char>s;
        int n = temp.size();
        for(int i=0;i<n;i++) {
            s.insert(temp[i]);
        }

        if(s.size()==n) return false;
        else return true;
    }

    bool buddyStrings(string s, string goal) {
        int n = s.length();
        int g = goal.length();

        if(n==g) {
            unordered_map<int,int>m1;
            unordered_map<int,int>m2;
            for(int i=0;i<n;i++) {
                m1[s[i]]++;
            }

            for(int i=0;i<g;i++) {
                m2[goal[i]]++;
            }

            for(int i=0;i<n;i++) {
                if( m2[s[i]]!=m1[s[i]] ) return false;
            }

            if(s==goal) {
                if(check(s)) return true;
                else return false;
            }
            else {
                int count = 0;
                for(int i=0;i<n;i++) {
                    if(s[i]!=goal[i]) count++;
                }

                if(count>2) return false;
                else return true;
            }
        }
        else {
            return false;
        }
    }
};
