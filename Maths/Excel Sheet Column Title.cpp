class Solution {
public:
    string convertToTitle(int cN) {
        string res;
        while(cN>0) {
            if(cN%26==0) {
                res+='Z';
            }
            else {
                res+=(char)((cN%26)+64);
            }
            cN--;
            cN/=26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
