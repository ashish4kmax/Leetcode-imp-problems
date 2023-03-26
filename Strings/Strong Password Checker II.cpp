class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        // Just follow the givin conditions we will get the answer through that.
        int ls=0;
        int ups=0;
        int digit=0;
        int special=0;
        int adjacent=0;
        unordered_map<char,bool>m;
        string s="!@#$%^&*()-+";
        for(int i=0;i<s.length();i++) {
            m.insert({s.at(i),true});
        }

        for(int i=0;i<p.length();i++) {
            if(islower(p.at(i))) {
                ls++;
            }
            else if(isupper(p.at(i))) {
                ups++;
            }
            else if(isdigit(p.at(i))) {
                digit++;
            }
            else if(m[p.at(i)]==true) {
                special++;
            }
        }

        for(int i=0;i<p.length()-1;i++) {
            if(p.at(i)==p.at(i+1)) {
                adjacent++;
            }
        }
        
        if(ls>=1 && ups>=1 && digit>=1 && special>=1 && p.length()>=8 && adjacent==0) {
            return true;
        }
        else {
            return false;
        }
    }
};
