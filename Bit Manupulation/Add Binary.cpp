class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        // At first we make the two binary strings length equal to apply the binary addition operation.
        if(a.length()<b.length()) {
            while(a.length()!=b.length()) {
                a.insert(a.begin(),'0');
            }
        }
        else if(a.length()>b.length()) {
            while(a.length()!=b.length()) {
                b.insert(b.begin(),'0');
            }
        }

        int carry=0;
        // Here we simply do binary addition logic as given below. (111=3, insert=1 c=1 and for 11=2, insert=0 c=1).
        for(int i=a.length()-1;i>-1;i--) {
            if(carry==1 && a.at(i)=='1' && b.at(i)=='1') {
                ans.insert(0,"1");
                carry=1;
            }
            else if(carry==0 && a.at(i)=='1' && b.at(i)=='1') {
                ans.insert(0,"0");
                carry=1;
            }
            else if(carry==0 && (a.at(i)=='1' || b.at(i)=='1')) {
                ans.insert(0,"1");
                carry=0;
            }
            else if(carry==1 && (a.at(i)=='1' || b.at(i)=='1')) {
                ans.insert(0,"0");
                carry=1;
            }
            else if(carry==1 && a.at(i)=='0' && b.at(i)=='0') {
                ans.insert(0,"1");
                carry=0;
            }
            else if(carry==0 && a.at(i)=='0' && b.at(i)=='0') {
                ans.insert(0,"0");
                carry=0;
            }
        }

        if(carry==1) {
            ans.insert(0,"1");
        }
        return ans;
    }
};
