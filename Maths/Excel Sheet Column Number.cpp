class Solution {
public:
    int titleToNumber(string cT) {
        int cn=0;
        int n=0;
        for(int i=cT.length()-1;i>-1;i--) {
            cn+=pow(26,n)*((int)(cT.at(i))-64);
            n++;
        }

        return cn;
    }
};
