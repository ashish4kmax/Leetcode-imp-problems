// Improved O(n1+n2) = O(n) timed solution and space O(1) optimized and best solution.
class Solution {
public:
    bool isSubsequence(string t, string s) {
        // Simpler in place method!!.
        int j=0;
        for(int i=0;i<s.length() && j<t.length();i++) {
            if(s[i]==t[j]) {
                j++;
            }
        }

        return (j==t.length());
    }
};

/*
// TC: O(n^2) TC can be imporved till O(nlogn) max maybe O(n) too.
// SC: O(n)
class Solution {
public:
    bool isSubsequence(string t, string s) {
        map<char,vector<int>>m;
        int n = s.length();

        for(int i=0;i<n;i++) {
            m[s[i]].push_back(i);
        }

        int prev = -1;
        for(int i=0;i<t.length();i++) {
            if(m[t[i]].size()==0) return false;
            else {
                if(prev==-1) {
                    prev = m[t[i]][0];
                }
                else {
                    int found = -1;
                    for(int j=0;j<m[t[i]].size();j++) {
                        if(m[t[i]][j]>prev) {
                            found = m[t[i]][j];
                            break;
                        }
                    }

                    if(found<prev) return false;
                    else prev = found;
                }
            }
        }

        return true;
    }
};
*/
