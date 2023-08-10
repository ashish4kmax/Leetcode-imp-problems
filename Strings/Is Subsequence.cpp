class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();

        if(n1==1 && n1==n2 && s!=t) return false; 

        size_t pfound = -1; 
        int c = 0;
        size_t found = 0;
        for(int i=0;i<n1;i++) {
            for(int j=found;j<n2;j++) {
                if(s[i]==t[j]) {
                    found = j+1;
                    break;
                }
            }
            if(found!=string::npos) {
                if(pfound!=found) c++;
                if(pfound==-1) {
                    pfound = found;
                }
                else {
                    if(pfound > found) return false;
                    pfound = found;
                }
            }
        }

        if(c!=n1) return false; 
        return true;
    }
};
