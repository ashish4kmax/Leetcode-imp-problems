class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());  

        int n = s1.length();

        int f1=0;
        int f2=0;
        for(int i=0;i<n;i++) {
            if(s2[i]<s1[i]) f1=1;
            if(s1[i]<s2[i]) f2=1;
        } 

        if(f1==0 || f2==0) {
            return true;
        }
        else {
            return false;
        }
    }
};
